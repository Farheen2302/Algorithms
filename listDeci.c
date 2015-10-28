#include <stdio.h>
#include <stdlib.h>
#include <math.h>



struct node
{
    int data;
    struct node *next;
};

struct retnode
{
    int i;
    int sum;
};


struct retnode dec(struct node *head);
struct node* createnode(int n);

struct node* createnode(int n)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->next = NULL;
}

int main()
{
    struct node *list;
    struct retnode val;
    list = createnode(1);
    list->next = createnode(1);
    list->next->next = createnode(0);
    list->next->next->next = createnode(0);
    list->next->next->next->next = createnode(1);
    list->next->next->next->next->next = createnode(0);  
    //sum = 0;
    val=dec(list);
    printf("\nThe number is = %d\n",val.sum);
    return 0;
}
    
struct retnode dec(struct node *head)
{
    struct retnode val;
    if(head==NULL)
        {
            val.sum=0;
            val.i = 0;
            return val;
           }
             
      val = dec(head->next);
      val.sum += head->data * pow(2,val.i);
      val.i = val.i + 1;
      return val;
}
      

