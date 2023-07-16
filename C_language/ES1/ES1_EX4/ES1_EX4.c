#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pi 3.14159265358979323846

int main()
{
    char shape, method;
    int value;
    float area;

    printf("Choose a shape,method and value:");
    scanf("%c %c %d", &shape, &method, &value);

    if (shape == 'c'){
        if (method == 'r'){
            area = pi * value * value;
            printf("Area of circle with radius %d is: %f", value, area);
        }
        else if (method == 'd'){
            area = pi * value * value / 4;
            printf("Area of circle with diameter %d is: %f", value, area);
        }
        else{
            printf("Invalid method");
        }
    }
    else{
        if(shape == 's'){
            if(method == 'd'){
                area = value * value / 2;
                printf("Area of square with diagonal %d is: %f", value, area);
            }
            else 
                if(method == 's'){
                    area = value * value;
                    printf("Area of square with perimeter %d is: %f", value, area);
            }
            else{
                printf("Invalid method");
            }
        }
        }
    return 0;
}