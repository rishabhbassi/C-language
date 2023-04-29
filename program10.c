#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    printf("Please enter the value of the fisrt number:");
    printf("\n");
    scanf("%d",&a);
    printf("Please enter the value of the second number:");
    printf("\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The values of the variables have been interchanged. %d and %d respectively.",a,b);
    printf("\n");
}