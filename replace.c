#include <stdio.h>
int main()
{
    int n,i;
   

    printf("enter n\n");
    scanf("%d",&n);
    int ar[n];

    for(i=0;i<n;i++)
    {
        printf("enter %d element\n",i);
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("array is %d\n",ar[i]);
    }
    

    int pos ,ele;
    printf("enter the position and new element/n");
    scanf("%d %d",&pos ,&ele);
    ar[pos]=ele;

    for(i=0;i<n;i++){
        printf("the new array is : %d\n", ar[i]);
    }

}
        
