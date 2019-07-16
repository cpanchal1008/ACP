#include<stdio.h>
void main()
 {
 int x[10];

 int i,se,min,max,mid;

 printf("Enter data");
   for(i=0;i<10;i++)
       scanf("%d",&x[i]);

printf("Enter element to search");
scanf("%d",&se);

min=0;
max=9;

for(mid=(min+max)/2;min<=max;mid=(min+max)/2)
{

   if(x[mid]==se)
   {
    printf("value is found %d",mid+1);
    break;
   }
   else if(se < x[mid])
    {
       max=mid-1;
    }
        else {
            min=mid+1;
            }


}

     if(min>max)
      {
        printf("not found");
      }


}
