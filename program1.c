#include<stdio.h>
int main()
{
    int n ;
    printf("enter number\n");
    scanf("%d",&n);

    int R,RR=0;
    do{
        R=n%10;
        RR=RR*10+R;
        n=n/10;
    }while(n!=0);
    printf("%d",RR);
}