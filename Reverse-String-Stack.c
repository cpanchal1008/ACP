#include<stdio.h>
#define MAX 10
//We define global variable so that access whole programme

int stack[MAX];
int top=-1;

//declare the push function which add  the value...
void push(char val)
{
   int i;
   if(top==MAX-1)
   {
   printf("\nStack is overflow");
   return;
   }
     top++;
    stack[top]=val;

}
//declare the pop function which is add remove the value..
 char pop()
 {
  char tmp;


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
    int ch,i=0;
    char val[MAX],tmp;

        printf("\nEnter any character of==");
        scanf("\n%s",val);

            while(val[i] != '\0')
            {
                 push(val[i]);
                 i++;
            }

           while(top != -1)
           {
             tmp=pop();
             printf("%c",tmp);
           }

 }
