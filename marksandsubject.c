#include<stdio.h>
int main(){
    int i,j,total=0,avg=0;
    int ar[3][5];

    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++){
          printf("enter the marks\n");
          scanf("%d",&ar[i][j]);
       }
    } 
   for(i=0;i<3;i++)
   {
      printf("%d\t",ar[i][i]);
   }
}
   




