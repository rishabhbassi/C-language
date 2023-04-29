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
    int i1,i2;

    printf("enter index value 1\n");
    scanf("%d",&i1);

    printf("enter index value 2\n");
    scanf("%d",&i2);

    for(i=i1;i<i2;i++){
        printf("%d\n",ar[i]);
    }
}
    
