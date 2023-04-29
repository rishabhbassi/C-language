#include<stdio.h> 

//declare
struct astha
{
    int rollnumber;
    char name[50];

};

//code
void main()
{
    struct astha x[3];
    int i;
    for(i=0;i<3;i++){
    printf("please enter roll number\n");
    scanf("%d",&x[i].rollnumber);
    printf("enter name\n");
    scanf("%s",&x[i].name);
    }
    for(i=0;i<3;i++)
    printf("roll number = %d and name = %s\n",x[i].rollnumber , x[i].name);
    
}