#include<stdio.h>
int main(){
    int i,N;
    int ar[10];

    for(i=0;i<5;i++)
    {
        printf("enter the array\n");
        scanf("%d",&ar[i]);
    }
    int l,sl;
    ar[0]=l;
    ar[0]=sl;
    for(i=0;i<5;i++)
    {
        if(ar[i]>l){
            sl=l;
            l=ar[i];
        }
        if(ar[i]>sl&&ar[i]<l)
        {
            sl=ar[i];
        }
        }
    printf("l=%d and sl=%d",l,sl);
}