#include<stdio.h>
int main()
{
    int n ;
    printf("enter n \n");
    scanf("%d",&n);

    int ar[n],i;
    for(i=0;i<n;i++){
        printf("enter a number\n");
        scanf("%d",&ar[i]);
    }

    for(i=0;i<n;i++){
        if(ele==ar[i]){
            printf("%d",i+1)
        }
    }
}