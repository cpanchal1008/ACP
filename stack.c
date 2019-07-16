#include<stdio.h>
#define MAX 10
//We define global variable so that access whole programme

int stack[MAX];
int top=-1;

//declare the push function which add  the value...
void push(int val)
{

   if(top==MAX-1)
   {
   printf("\nStack is overflow");
   return;
   }
    top++;
    stack[top]=val;

}
//declare the pop function which is add remove the value..
 int pop()
 {
  int tmp;
   if(top == -1)
   {
      printf("\nStack is underflow");
      return 0;

   }
   tmp=stack[top];
   top--;
   return tmp;

 }
 //declare the main value....
 void main()
 {
    int ch,val,tmp;

    do{
        printf("\nChoose value\n");
        printf("\n1.push");
        printf("\n2.pop ");
        printf("\n3.Exit ");
        scanf("\n%d",&ch);

        if(ch==1)
        {
          printf("\nEnter value");
          scanf("\n%d",&val);
          push(val);
        }
        else if(ch==2)
        {
           tmp=pop();
           printf("\nThe top value is==%d",tmp);
        }
        else if(ch==3)
           printf("\nExited");
    } while(ch!=3);


 }
