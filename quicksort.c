//Here we impelements a Quick sort ....so we use the recursion of the two function.....
#include<stdio.h>
void quicksort(int *,int,int);
int split(int *,int,int);
void main()
{
int arr[10]={0,1,2,3,4,5,6,7,8,9};
int i;
printf("\n Quick sort array\n Arrray before sorting");
  for(i=0;i<10;i++)
    printf("\n%d",arr[i]);

  quicksort(arr,0,9);
  printf("\n Arra after sorting");
    for(i=0;i<10;i++)
        printf("\n%d",arr[i]);

}
 void quicksort(int *a,int lower,int upper)
 {
     //Here is we pass the MID as firts element afterwards its may be change....
     int mid;
     if(upper >lower)
     {
         //Here we make the recursion and its  returns Q
         mid=split(a,lower,upper);
         quicksort(a,lower,mid-1);
         quicksort(a,mid+1,upper);

     }                              //      9,8,7,,6,5,4,3,2,1,0
 }
  int split(int *a,int lower,int upper)
  {
      int i,p,q,t;
      p=lower+1;
      q=upper;
      i=a[lower];
 while(q>p)
    {

          while(a[p]>i)
              p++;

          while(a[q]<i)
            q--;
         if(q > p)
         {  // its variable  changing P and Q.....
             t=a[p];
             a[p]=a[q];
             a[q]=t;
         }
    }
    // Its changing for a pivot element
     t=a[lower];
     a[lower]=a[q];
     a[q]=t;
      return q;
  }












