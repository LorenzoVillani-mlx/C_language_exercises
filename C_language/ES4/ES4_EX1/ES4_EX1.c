#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 30

int subSeq(int v[],int num){

    int i,cnt,vsub[num];
    cnt = 0;
    for(i=0;i<num;i++){
        if(v[i] == 0){
            cnt++;
        }
        while (v[i]!= 0){
            vsub[i]=v[i];
        }
    }
    return vsub[num];
}

int main(){

    int v[max],i,cnt,maxcnt,len;
    
    for(i=0;i<max;i++){
        v[i]=0;
    }

    i = 0;
    len = 0;
    while(i<max){
        printf("Select a value for the %d element of the array:\n",i);
        scanf("%3d",&v[i]);
        if(v[i] == 100){
            v[i] = 0;
            break;
        }
        i++;
        len++;
    }
    maxcnt = 0;
    cnt = 0;

    for(i=0;i<len;i++){
        if(v[i] != 0){
            cnt++;
        }else{
            cnt=0;
        }
        if(maxcnt<=cnt){
            maxcnt = cnt;
        }
    }

    int vsub[maxcnt];
    cnt = 0;
    i = 0;
    while(cnt<=maxcnt){
        if(v[i] != 0){
            vsub[i] = v[i];
            cnt++;
        }else{
            cnt = 0;
        }
        i++;
    }

    printf("\nThe maximum lenght is: %d\n",maxcnt);
    printf("The longest sub-vector is:\n");
    for(i=0;i<maxcnt;i++){
        printf("%d ",vsub[i]);
    }
    printf("\n");
    return 0;
}