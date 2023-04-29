#include<stdio.h>
int main()
{
    int n,i,N ;

    printf("enter n \n");
    scanf("%d",&n);

    int ar[n];
    for(i=0;i<n;i++)
    {
        printf("enter %d element of array\n",i);
        scanf("%d",&ar[i]);
    }
    printf("enter the number to find\n");
    scanf("%d",&N);

    for(i=0;i<n;i++)
    {
        if(ar[i]==N){
            printf("the number is located at %d of array\n");
        }
       else {
            printf("the number is not there \n");
        }
    }
    return 0;
}