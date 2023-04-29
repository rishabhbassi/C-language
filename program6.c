#include <stdio.h>
int main()
{
    float mm,cm,inch,feet;
    printf("Please enter the value in mm:");
    printf("\n");
    scanf("%f",&mm);
    cm=mm/10;
    inch=cm/2.5;
    feet=inch/12;
    printf("The value in mm is: %f",mm);
    printf("\n");
    printf("The value in cm is: %f",cm);
    printf("\n");
    printf("The value in inch is: %f",inch);
    printf("\n");
    printf("The value in feet is: %f",feet);
    printf("\n");
}   