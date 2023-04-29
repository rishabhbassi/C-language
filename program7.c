#include <stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,distance;
    printf("Please enter the coordinates of the first point:");
    printf("\n");
    scanf("%f%f",&x1,&y1);
    printf("Please enter the coordinates of the second point:");
    printf("\n");
    scanf("%f%f",&x2,&y2);
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("The distance between the two points is %f",distance);
    printf("\n");
}