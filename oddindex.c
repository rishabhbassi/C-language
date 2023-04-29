#include<stdio.h>
int main()
{
    int n,i;

    printf("enter n \n");
    scanf("%d",&n);

    int ar[n],sum=0;

    for(i=0;i<n;i++){
        printf("enter elements\n");
        scanf("%d",&ar[i]);
    }
    for(i=1;i<n;i=i+2){
        sum=sum+ar[i];
    }
    printf("the sum is %d",sum);
    return 0;
    }