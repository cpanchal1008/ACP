#include<stdio.h>
void mergesort(int *,int,int);
int merge(int *,int,int,int);
void main()
{
    int arr[10]={55,96,25,36,98,41,25,33,26,100};
    int i;
    int beg=0,end=9;

    printf("\n sorted array \n Array is....\n");
    mergesort(arr,0,9);
    for(i=0;i<10;i++)
        printf("%d\n",arr[i]);
}
    void mergesort(int *arr, int beg,int end)
    {
        int mid;

        if(beg<end)
            {
            mid=(beg/end)/2;
            merge(arr,mid,0,9);
            mergesort(arr,beg,mid-1);
            mergesort(arr,mid+1,end);

            }
    }
   int merge(int *arr,int mid,int beg, int end)
     {
            int i=beg;
            int j=mid+1,index=0,x[10];


            while( (arr[i]<=mid) && (arr[j]<=end) )
            {
                  if(arr[i]<arr[j])
                 {
                   x[index]=arr[i];
                   i++;

                  }
                else
                {
                 x[index]=arr[j];
                 j++;
                }
                index++;
            }

          if(arr[i]<=mid)
            {
              while(arr[j]<=end)
                {
                  x[index]=arr[j];
                  j++;
                  index++;
                }
              }
          else
          {
             while(arr[i]<=mid)
                {
                  x[index]=arr[i];
                  i++;
                  index++;
                }
          }
 for(i=0;i<=9;i++)
 {
    arr[i]=x[index];


 }
}
