/*Here we are Implement a doubly linked list
  with following operation....
*/
#include<stdio.h>
//Defining structure nodes
struct node
{
    int data;
    struct node *next,*prev;
}*first=NULL;

//Defining first nodes...
void insert()
{
    struct node *new1,*curr;
    int n,val,i;
    printf("\nEnter Elements to add in Linked-list\n");
    scanf("\n%d",&n);
  for(i=1;i<=n;i++)
   {
    printf("\nEnter value\n");
    new1=(struct node*)malloc(sizeof(struct node));
    scanf("\n%d",&new1->data);
   // new1->data=val;
    new1->next=NULL;
    new1->prev=NULL;

    if(first==NULL)
    {
        first=new1;
        curr=new1;

    }
 //Adds node if already added more than one nodes
  else {
      curr=first;
      while(curr->next != NULL)
        {
          curr=curr->next;
        }
      curr->next=new1;
      new1->prev=curr;
      curr=new1;
     }
  }
}
//Defining Insert after Function.....
void insaft(int val,int key)
{

  struct node *new1,*curr;
    new1=(struct node*)malloc(sizeof(struct node));
    new1->data=val;
    new1->next=NULL;
    new1->prev=NULL;

 //If first Node is Empty Than below code are working.....
    if(first==NULL)
    {
        printf("\nLinked list is empty\n");
        return;
    }
    curr=first;
    while(curr->data != key && curr != NULL)
    {
        curr=curr->next;

    }
    /*IF CURR REACHED LAST NODE*/
    if(curr->next == NULL)
    {
        new1->prev=curr;
        curr->next=new1;
        return;
        //Here already Adds the next nodes as NULL....
    }
   // if Curr is previos or intermediate than executes follow codes...
      new1->next=curr->next;
      curr->next=new1;
      new1->prev=curr;
      new1->next->prev=new1;

}

//Implementing insret before function...
void insbfr(int val,int key)
{
  struct node *new1,*curr;
   new1=(struct node*)malloc(sizeof(struct node));
    new1->data=val;
    new1->next=NULL;
    /*IF FIRST IS NULL*/
    new1->prev=NULL;
    if(first==NULL)
    {
        printf("\n Linked List is empty");
        return;
    }
    /*IF FIRST IS KEY*/

    if(first->data==key)
    {
     curr=first;
     curr->prev=new1;
     new1->next=curr;
     first=new1;
     return;
    }

    curr=first;
    while(curr->data != key && curr!=NULL)
    {
        curr = curr -> next;
    }

     new1 -> prev = curr -> prev;
     curr -> prev = new1;
     new1 -> next = curr;
     new1 -> prev->next=new1;

}
//Implementing Display function....
void display()
{
  struct node *curr;

       if(first==NULL)
    {
        printf("\nLinkList is empty\n");
        return;
    }
    curr=first;
    while(curr->next != NULL)
    {
        printf("%d-->",curr->data);
        curr=curr->next;
    }
      printf("%d-->",curr->data);

}

//implementing Delete node function....
void delnode(int val)
{

  struct node *curr;
  if(first==NULL)
    {
       printf("\nLL is empty\n");
               return;
    }
    curr=first;

    //If first nodre deletes than executes follow codes...
     if(first->data == val)
    {
       first=first->next;
       curr->prev=NULL;
       free(curr);
       return;
    }
    curr=first;
    while(curr->data != val && curr !=NULL)
    {
        curr=curr->next;
    }

     curr->prev->next=curr->next;
     free(curr);

}


/*Implementing Main function..*/
void main()
{
    int se,key,val,in;
    do
    {
        printf("\n please take Choose for operation:");
        printf("\n 1.Insert");
        printf("\n 2.Display");
        printf("\n 3.Insert after:");
        printf("\n 4.Insert before");
        printf("\n 5.Delete node");
        printf("\n 6.Quit\n");

        scanf("\n%d",&in);

        if(in==1)
        {

            insert();
        }
        else if(in==2)
        {
            display();
        }
        else if(in==3)
        {
            printf("\nEnter value and key\n");
            scanf("\n%d%d",&val,&key);
            insaft(val,key);
        }
        else if(in==4)
        {
            printf("\nEnter value and key\n");
            scanf("\n%d%d",&val,&key);
            insbfr(val,key);
        }
        else if(in==5)
        {
            printf("\nEnter value\n");
            scanf("\n%d",&val);
            delnode(val);
        }
    }
    while(in != 6);

}
























