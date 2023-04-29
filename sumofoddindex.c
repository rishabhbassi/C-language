#include<stdio.h>
int main(){
    int i;
    int ar[10];

    for(i=0;i<5;i++)
    {
        printf("enter the array\n");
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for(i=1;i<5;i=i+2)
    {
        printf("%d\n",ar[i]);
        sum=sum+ar[i];
    }
    

    printf("%d",sum);
}
    