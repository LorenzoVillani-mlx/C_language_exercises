#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(){

    int cnt_open, cnt_closed, lin;
    char curr,prev,sv;
    FILE *fp_in;

    fp_in = fopen("input.txt","r");
    if (fp_in == NULL){
        printf("Unable to open input.txt\n");
        return 1;
    }
    cnt_open = 0;
    cnt_closed = 0;
    lin = 1;
    prev = '$';
    while (fscanf(fp_in,"%c",&curr) != EOF){

        if(curr == '('){
            cnt_open++;
        }
        else if(curr == ')'){
            cnt_closed++;
        }
        if(curr == '\n'){
            lin++;
            if(cnt_open != cnt_closed){
                printf("Error in line %d, lack of parenthesis\n",lin);
                cnt_open = 0;
                cnt_closed = 0;
            }
            if(prev == '+' || prev == '/' || prev == '*' || prev == '-'){
                 printf("Error in line %d\n",lin);
            }
        }
        if(prev == ' ' && isdigit(sv) != 0 && isdigit(curr) != 0){
            printf("Error in line %d\n",lin);
        }
        if(prev == '(' && (curr == '+' || curr == '/' || curr == '*' || curr == '-')){
            printf("Error in line %d\n",lin);
        }

        sv = prev;
        prev = curr;
    }

    return 0;
}