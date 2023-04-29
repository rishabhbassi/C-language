#include<stdio.h>
int main(){
    int i,N;
    char ar[5];
    for(i=0;i<5;i++)
    {
    printf("enter the array\n");
    scanf("%c",&ar[i]);
    }
    
    for(i=0;i<5;i++)
    {
        printf("ascii code for %c is %d\n",ar[i],(int)ar[i]);
    
    }
}