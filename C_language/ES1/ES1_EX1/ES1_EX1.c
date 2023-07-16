#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    float z;

    printf("Enter an integer number:");
    scanf("%d",&x);
    y = 3;
    z = (float) (x)/y;
    printf("%d/%d = %.3f\n",x,y,z);
    return 0;
    
}