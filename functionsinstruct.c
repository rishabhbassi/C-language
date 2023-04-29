#include<stdio.h>
struct student
{
    int roll_number;
    char name [25];
};
void getdata(struct student x[5],int n)
{
    int i ;
    for(i=0;i<5;i++)
    {
        printf("enter roll number and name\n");
        scanf("%d",&x[i].roll_number);
        gets(x[i].name);
    }

}
void putdata(struct student x[5],int n)
{
    int i ;
    for(i=0;i<5;i++)
    {
        printf("roll number is %d\n",x[i].roll_number);
        printf("name is %s\n",x[i].name);
       
    }
}



void main()
{
    int i;
    struct student x[5];
    getdata(x,5);
    putdata(x,5);
    
}

