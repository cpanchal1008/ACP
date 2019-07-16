#include<stdio.h>
void main()
{
 int x[5];
 int j,i,tmp;
 printf("\n enter any elements");
 for (i=0; i<5; i++)
  {
    scanf("%d",&x[i]);

 }
printf("Now data sorted\n");

// Here we implement a bubble short so that we can comparefirst and its neighbour variable

for(i=0;i<5;i++)
 {
   for(j=0;j<=4-i;j++)
   {
     if(x[j+1]<x[j])
     {
       tmp=x[j];
       x[j]=x[j+1];
       x[j+1]=tmp;
     }
   }

 }
 for(i=0;i<5;i++)
   printf("\n %d",x[i]);

}
