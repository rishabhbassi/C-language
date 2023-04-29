#include<stdio.h>
int main(){
    int i,N;
    int ar[10];

    for(i=0;i<5;i++)
    {
        printf("enter the array\n");
        scanf("%d",&ar[i]);
    }
    
    int p=0,n=0,o=0,e=0,z=0;

    for(i=0;i<5;i++)
    {
        if(ar[i]<0)
        {
            n++;
        }
        if(ar[i]>0)
        {
            p++;
        }
        if(ar[i]%2==0&&ar[i]!=0)
        {
            e++;
        }
        else{
            o++;
        }
        if(ar[i]==0)
        z++;
    }
    printf("negative=%d , positive=%d , odd=%d , even=%d , zero=%d",n,p,o,e,z);
}