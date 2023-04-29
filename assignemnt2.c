#include<stdio.h>
int main()
{
    /*#ifndef ONLINE_JUDJE       // *FOR ANOTHER FILE FOR INPUT AND OUTPUT
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif */
int a,i=0;
printf("inout numebr\n");
scanf("%d", &a);

do{

    printf("%d\n",a=a*i);
    i++;
}while(i==10);



    return 0;

}
