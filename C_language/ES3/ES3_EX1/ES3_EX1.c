#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    FILE *fp_in, *fp_out;
    char c,q;

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
    
    while(fscanf(fp_in,"%c",&c) != EOF){
        fprintf(stderr, "ho la mamma troia: %c\n", c);
        if (isdigit(c) != 0){
            c = '*';
            fprintf(fp_out,"%c",c);
        } else {
            if(ispunct(c)){
                
                fscanf(fp_in,"%c",&q);
                if(q == ' '){
                    fprintf(stderr, "inner if: %c %c\n", c, q);
                    fprintf(fp_out, "%c%c",c,q);
                } else {
                    fprintf(fp_out,"%c %c",c,q);
                }
            }
        }

    }

    return 0;
}