#include <stdio.h>
#define MAX 10

void main()

{
int x[MAX];
int i,SE;

for(i=0;i<MAX;i++)

    {
    printf("\nEnter Number:");
    scanf("%d",&x[i]);
    }

    printf("\nEnter Search Element:");
    scanf("%d",&SE);

for (i=0;i<MAX;i++)

    {
        if(x[i]==SE)
        {

            printf("\nValue Found at position:%d",i+1);


        }
    }
    for( ;i<MAX;i++)

    {
        if(x[i]==SE)

        {

            printf("\nValue Found at position:%d",i+1);

        }
         if(i==MAX)
        {
        printf("\nSearch Element do not Exist");
        }

    }


}
