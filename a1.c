#include <stdio.h>
int main()
{
    int n,i,ar[n] ;

    printf("enter n\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter %d element\n",i);
        scanf("%d",&ar[i]);
        for(i=n;i>0;i--){
            printf("%d",ar[i]);}
    }
}