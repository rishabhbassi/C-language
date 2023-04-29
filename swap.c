#include<stdio.h>
int main()
{
    int n ;

    printf("enter n\n");
    scanf("%d",&n);

    int ar[n], i;
    for(i=0;i<n;i++){
        printf("enter a number\n");
        scanf("%d",&ar[i]);
    }
    int swap;
    swap=ar[4];
    ar[4]=ar[6];
    ar[6]=swap;

    printf("the new array is:");

    for(i=0;i<n;i++){
        printf("%d\n",ar[i]);

    }
}
    
