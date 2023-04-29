#include<stdio.h>

int main(){
    int n , i ;
    printf("enter number if elements\n");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        printf("enter %d element \n",i);
        scanf("%d",&arr[i]);
    }
    printf("the array is\n");

    for(i=0;i<n;i++)
    {
    printf("%d\n",arr[i]);
    }
   
    printf("the reversed array is\n");
   
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}