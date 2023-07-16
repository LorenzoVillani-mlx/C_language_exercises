#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int N,i;
    
    printf("Insert a number: ");
    scanf("%d", &N);

    int x[N];

    x[0] = 0;
    x[1] = 1;

    if(N==0){
        printf("%d ", x[0]);
    }
    else if(N==1){
        printf("%d ", x[0]);
        printf("%d ", x[1]);
    }
    else{
        printf("%d ", x[0]);
        printf("%d ", x[1]);
    }

    for (i=2; i<=N; i++){
        x[i] = x[i-1] + x[i-2];
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}