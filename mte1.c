#include <stdio.h>
int Count(int ar[],int n);


int main() {
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    
    int ar[n],i,c,o,z;
    for(i=0;i<n;i++)
    {
        printf("enter the elements\n");
        scanf("%d",&ar[i]);
    }
    c=Count(ar,n);
    if(c==o)
    {
        printf("ones");
    }
    else if(c==z)
    {
        printf("wrong");
    }
    

    return 0;
}

int Count(int ar[],int n)
{
    int i,o,z;
    for(i=0;i<n;i++)
    {
        if(ar[i]==1)
        {
            o++;
        }
        else if(ar[i]==0)
        {
            z++;
        }
    }
    
    if(o>z)
    {
        return(o);
    }
    
    if(z>o)
    {
        return(z);
    }
}