#include <stdio.h>
#include <math.h>
int main()
{
    float radius,area;
    printf("Please enter the radius of the circle:");
    printf("\n");
    scanf("%f",&radius);
    area=22.0/7*pow(radius,2);
    printf("The area of the circle is %f",area);
    printf("\n");
}