#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int A,B,C,i;
    A = -1;
    B = -1;
    C = 1;
    i = 0;
    
    while (A<0){
        printf("Insert a positive integer for A: \n");
        scanf("%d",&A);
        if(i>1){
            printf("Oh fra ma sei scemo in culo, ti ho detto positivo\n");
        }
        i++;
    }
    
    i = 0;
    while (B<0){
        printf("Insert a positive integer for B: \n");
        scanf("%d",&B);
        if(i>1){
            printf("Oh fra ma sei scemo in culo, ti ho detto positivo\n");
        }
        i++;
    }
    
    while(C!=0){
        if (A<B){
            C=A;
            A=B;
            B=C;
        }
        C=A%B;
        A=B;
        B=C;
    }
    printf("The GCF is: %d\n",A);

    return 0;
}