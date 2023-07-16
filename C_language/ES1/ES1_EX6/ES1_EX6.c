#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp_in, *fp_out;
    char op;
    float opt1,opt2, res;

    if ((fp_in = fopen("input.txt", "r")) == NULL) {
        printf("Error! opening file\n");
        exit(1);
    }
    if ((fp_out = fopen("output.txt", "w")) == NULL) {
        printf("Error! opening file\n");
        exit(1);
    }

    while (fscanf(fp_in, "%c %f %f\n", &op, &opt1, &opt2) != EOF){

        switch(op){
            case '+':
                res = opt1+opt2; break;
            case '-':
                res = opt1-opt2; break;
            case '*':
                res = opt1*opt2; break;
            case '/':
                res = opt1/opt2; break;
        }
        fprintf(fp_out, "%c %f\n",op, res);
    }

return 0;
}