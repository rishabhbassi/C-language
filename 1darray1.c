#include<stdio.h>
int main(){
    int i,N;
    int ar[10];

    for(i=0;i<10;i++)
    {
        printf("enter the array\n");
        scanf("%d",&ar[i]);
    }
    printf("enter the number you want to check\n");
    scanf("%d",&N);
     for(i=0;i<10;i++)
     {
         if(ar[i]==N)
         {
             printf("yes number is present at %d position\n",i);
         }

     }
}

