// Insertion sort
#include<stdio.h>
void main()
{
  int x[5]={90,25,63,56,20};
  int i,j,tmp;

 /* printf("\n enter any element");

 for(i=0;i<5;i++)
   scanf("%d",&x[i]);
*/

   // it is insertion sort we are compare with 0 and TMP var and  start time we put a vr. in tmp and

   for(i=1;i<5;i++)
   {
       tmp=x[i];
  // 90,25,63,56,20
    for(j=i;j>0 && x[j-1] > tmp;j--)
    {
       x[j]=x[j-1];
      // 90 90 63 56 20
    } // j-- = 0
    x[j]=tmp;
   }
 printf("\n Data after sorted\n");
 for(i=0;i<5;i++)
   printf("%d\n",x[i]);

}





