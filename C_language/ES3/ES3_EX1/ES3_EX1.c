#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    FILE *fp_in, *fp_out;
    char curr;
    int cnt,i;

    fp_in = fopen("input.txt","r");
    fp_out = fopen("output.txt","w");

    if(fp_in == NULL){
        printf("ERROR: unable to open input.txt\n");
        return 1;
    }    
    if(fp_out == NULL){
        printf("ERROR: unable to open output.txt\n");
        return 2;
    }

    cnt = 0;
    while(fscanf(fp_in,"%c",&curr) != EOF){

        cnt++;
        if(cnt==25){
            fprintf(fp_out,"%c | c:%d\n",curr,cnt);
            cnt = 0;
        }else if(curr == '\n'){
            for(i=0;i<27-cnt;i++){
                fprintf(fp_out," ");
            }
            fprintf(fp_out, "| c:%d",cnt-1);
            fprintf(fp_out,"%c",curr);
            cnt = 0;
        }else{
            if(isdigit(curr)!=0){
                curr = '*';
            }
            fprintf(fp_out,"%c",curr);
        }
    }
    if(cnt != 0){
        for(i=0;i<26-cnt;i++){
            fprintf(fp_out," ");
        }
        fprintf(fp_out,"| c:%d",cnt);
    }

    fclose(fp_in);
    fclose(fp_out);


    return 0;
}