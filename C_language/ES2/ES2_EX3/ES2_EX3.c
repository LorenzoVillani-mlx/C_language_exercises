#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compressing(FILE *fp_in, FILE *fp_out){
    int cnt;
    char prev, curr;
    
    prev = '$';
    cnt = 0;
    while (fscanf(fp_in, "%c", &curr) != EOF){

        if (prev != curr && prev != '$') {
            if (cnt < 2) {
                fprintf(fp_out, "%c", prev);
            } else {
                fprintf(fp_out, "%c$%d", prev, cnt);
            }
            cnt = 0;
        }
        if (prev == curr){
            cnt++;
        }
        if(cnt == 9){
            fprintf(fp_out,"%c$%d", prev, cnt);
            cnt = 0;
        }
        prev = curr;
    }
    return 0;
};

int decompressing(FILE *fp_in, FILE *fp_out){

    int cnt,i;
    char prev, curr, rip;

     while (fscanf(fp_in, "%c", &curr) != EOF){

        if(prev != '$'){
            if(curr != '$'){
                fprintf(fp_out,"%c",curr);
            }
        }else{
            cnt = curr - '0';
            for(i=0;i<cnt;i++){
                fprintf(fp_out,"%c",rip);
            }
        }
        rip = prev;
        prev = curr;
     }
     return 0;
};

int main(){

    int n;
    FILE *fp_in, *fp_out;

    fp_in = fopen("source.txt","r");
    fp_out = fopen("output.txt","w");

    if(fp_in == NULL){
        printf("Errore nell'apertura del file input.txt\n");
        exit(1);
    }
    if( fp_out == NULL){
        printf("Errore nell'apertura del file output.txt\n");
        exit(2);
    }
    printf("Choose the operation:\n");
    printf("1. Compressing\n");
    printf("2. Decompressing\n");
    scanf("%1d",&n);
    
    if(n == 1){
        compressing(fp_in,fp_out);
    }else if(n == 2){
        decompressing(fp_in,fp_out);
    }else{
        printf("Invalid opeation\n");
    }

    fclose(fp_out);
    fclose(fp_in);
    return 0;
}