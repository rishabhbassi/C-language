#include<stdio.h>
int main()
{
    int n ;
    printf("enter n \n");
    scanf("%d",&n);

    char ar[n];
    int i;
    for(i=0;i<n;i++){
        printf("enter a number\n");
        scanf("%s",&ar[i]);
    }
    int x;
    for(i=0;i<n;i++){
        x=(int)ar[i];
        printf("%d\n",x);
        
    }
}
    