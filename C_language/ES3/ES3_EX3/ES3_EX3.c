#include <stdio.h>
#include <stdlib.h>

int main(){

    int cnt,lin,max,min;
    char curr, prev;
    FILE *fp_in;

    fp_in = fopen("numbers.txt","r");
    if(fp_in == NULL){
        printf("Error: not able to open file\n");
    }

    lin = 0;
    max = 0;
    min = 0;

    while (fscanf(fp_in,"%c",&curr) != EOF){

        if(curr == '\n'){
            lin++;
        }
        if(curr != ' '|| curr != '\n'){
            curr = curr - '0';
            if(max > curr){
                max = curr;
            }
            if(min < curr){
                min = curr;
            }   
        }

    }
    printf("Max value: %d\n",max);
    printf("Min value: %d\n",min);

    return 0;
}