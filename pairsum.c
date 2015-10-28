#include <stdlib.h>
#include <stdio.h>
#define MAX_SIZE 100
struct node
{
    int data;
    struct node * right,*left;
   };

struct stack
{
    int size;
    int top;
    struct node* *array;//make array(or pointer) of the node pointers of the tree
   };
   
struct stack * createStack(int size)
{
    struct stack *Stack = (struct stack *)malloc(sizeof(struct stack));
    Stack->size = size;
    Stack->top = -1;
    Stack->array=(struct node **)malloc(size*sizeof(struct node*));
    return Stack;
 }
  
int isFull(struct stack *Stack)
{
    return ((Stack->top - 1) == Stack->top);
   }
int isEmpty(struct stack *Stack)
{
    return Stack->top == -1;
}

 void push(struct stack * Stack,struct node * node)
 {
    if(isFull(Stack))
        return;
     Stack->array[++Stack->top] = node;
 }
 struct node * pop(struct stack *Stack)
  {
    if(isEmpty(Stack))
        return;
    return Stack->array[Stack->top--];
   }
   
int isPairPresent(struct node *root,int target)
{
    struct stack *s1 = createStack(MAX_SIZE);//for the normal inorder traversal
    struct stack *s2 = createStack(MAX_SIZE);//for the reverse order traversal
    int done1 = 0, done2 = 0;
    int var1 = 0, var2 = 0;
    struct node *curr1 = root, *curr2 = root;    
    
    while(1)
    {
        while(done1==0)
        {
            if(curr1!=NULL)
            {
                push(s1,curr1);
                curr1=curr1->left;
             }
            else
            {
                if(isEmpty(s1))
                    done1 = 1;
                 else
                 {
                    curr1 = pop(s1);
                    var1 = curr1->data;
                    curr1 = curr1->right;
                    done1 = 1;
                 }
            }
       }
       
        while(done2==0)
        {
            if(curr2!=NULL)
            {
                push(s2,curr2);
                curr2=curr2->right;
             }
            else
            {
                if(isEmpty(s2))
                    done2 = 1;
                 else
                 {
                    curr2 = pop(s2);
                    var2 = curr2->data;
                    curr2 = curr2->left;
                    done2 = 1;
                 }
            }
       }
       
       
       if(var1!=var2 && (var1+var2==target))
       {
            printf("\n Pair Found: %d + %d = %d\n", var1, var2, target);
            return 1;
        }
        
        else if((var1+var2)<target)
        {
            done1 = 0;
         }
        else if((var1+var2)>target)
        {
            done2 = 0;
         }
         
        if(var1>=var2)
            return 0;
    }//while loop
    
}//function          
       
struct node * NewNode(int val)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = val;
    tmp->right =NULL;
    tmp->left = NULL;
    return tmp;
}

int main()
{
    /*
                   15
                /     \
              10      20
             / \     /  \
            8  12   16  25    */
    struct node *root =  NewNode(15);
    root->left = NewNode(10);
    root->right = NewNode(20);
    root->left->left = NewNode(8);
    root->left->right = NewNode(12);
    root->right->left = NewNode(16);
    root->right->right = NewNode(25);
 
    int target = 33;
    if (isPairPresent(root, target) == 0)
        printf("\n No such values are found\n");
 
    return 0;
}
       
            
       
            
