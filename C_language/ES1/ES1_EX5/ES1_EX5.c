#include <stdio.h>
#include <stdlib.h>

int main(){

    char op;
    float opt1,opt2,res;

    printf("Insert operator:");
    op = getchar();
    printf("Insert operands:");
    scanf("%f %f",&opt1,&opt2);

    switch(op){
        case '+':
            res = opt1+opt2; break;
            break;
        case '-':
            res = opt1-opt2; break;
        case '*':
            res = opt1*opt2; break;
        case '/':
            if(opt2 == 0){
                printf("Error: oh fratè ma che hai nel cervello? la merda?\n");
                break;
            }
            res = opt1/opt2; break;
    }
    printf("%f %c %f = %f\n",opt1,op,opt2,res);
return 0;
}