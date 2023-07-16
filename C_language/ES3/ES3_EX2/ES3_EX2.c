#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int cnt_open, cnt_closed,k,len;
    char a, *line = NULL;
    FILE *fp;

    fp = fopen("input.txt","r");
    if (fp == NULL){
        printf("Unable to open input.txt\n");
        return 1;
    }
    cnt_open = 0;
    cnt_closed = 0;
    k = 0;

    while ((getline(&line, &len, fp)) != -1){

        k++;

        if(a == '('){
            cnt_open++;
            }
        if(a == ')'){
            cnt_closed++;
        }
        if(cnt_open != cnt_closed){
            fprintf(stdout,"Error in line %d\n",k);
        }
    }

    return 0;
}