#include<stdio.h>
struct student
{
    int roll_number;
    char name [25];
};
void main()
{
    int i;
    struct student x[5];
    for(i=0;i<5;i++){
    printf("enter roll number and name\n");
    scanf("%d",&x[i].roll_number);
    gets(x[i].name);
    }

    for(i=0;i<5;i++)

    printf("roll number = %d and name is%s\n",x[i].roll_number, x[i].name);
    
}