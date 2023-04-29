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
    int large=ar[0];
    int small=ar[0];

    for(i=1;i<n;i++){
        if(large<ar[i]){
            large=ar[i];
            
        }
        if(small>ar[i]){
            small=ar[i];
        }
    }
    printf("%d",large);
    printf("\n");
    printf("%d",small);
}
