#include<stdio.h>
void main()
{
 int x[5];
 int j,i,tmp;
 printf("\n enter any elements");
 for (i=0; i<5; i++)
    scanf("%d",&x[i]);

    for(i=0;i<4;i++)
    {
      for(j=i+1;j<5;j++)
      {
        if(x[i]>x[j])
        {
        tmp=x[i];
        x[i]=x[j];
        x[j]=tmp;

        }

      }

    }

  printf("data is\n");
  for(i=0;i<5;i++)
    printf("%d\n",x[i]);


}
