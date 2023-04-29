#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Please enter the value of the fisrt number:");
    printf("\n");
    scanf("%d",&a);
    printf("Please enter the value of the second number:");
    printf("\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The values of the two variables have been interchanged. %d and %d respectively.",a,b);
    printf("\n");
}