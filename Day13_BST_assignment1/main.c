#include<stdio.h>
#include<stdlib.h>

struct Tree
{
  int data;
  struct Tree*left_child,*right_child;
};

void insert_node(struct Tree**,int);
struct Tree* free_node(struct Tree*);
void inorder_show(struct Tree*);
void print_btw_value(struct Tree*,int,int);

void insert_node(struct Tree**root,int value)
{
  struct Tree*new_node=(struct Tree*)malloc(sizeof(struct Tree));
  if(new_node)
  {
    new_node->left_child=NULL;
    new_node->right_child=NULL;
    new_node->data=value;
    if(*root)
    {
      struct Tree*temp=*root;
        while(temp)
        {
          if(temp->data>=value)
          {
            if(temp->left_child!=NULL)
             temp=temp->left_child;
            else
            {
             temp->left_child=new_node;
             break;
            }
          }
        else
        {
          if(temp->right_child!=NULL)
            temp=temp->right_child;
          else
          {
            temp->right_child=new_node;
            break;
          }
        }
      }
    }
    else
    {
        *root=new_node;
    }

  }
  else
    {
     printf("\n memory Overflow");
 }

}

void inorder_show(struct Tree*temp){

  if(temp)
    {
    inorder_show(temp->left_child);
    printf("  %d",temp->data);
    inorder_show(temp->right_child);
    }
  else
    return;

}

struct Tree* free_node(struct Tree*temp){

  if(temp)
    {
    temp->left_child=free_node((temp->left_child));
    temp->right_child=free_node(temp->right_child);
    free(temp);
    temp=NULL;
    }
  return NULL;
}

void print_btw_value(struct Tree*temp,int start,int end)
{
  if(temp !=NULL)
  {
    print_btw_value(temp->left_child,start,end);
    if( (temp->data >= start && temp->data <=end ) )
      printf(" %d",temp->data);
    print_btw_value(temp->right_child,start,end);
  }
}

int main(){

  struct Tree*root=NULL;

  /*The given input data are going inserted on BST */
  /* 20, 8, 22, 4, 12 */

  insert_node(&root,20);
  insert_node(&root,8);
  insert_node(&root,22);
  insert_node(&root,4);
  insert_node(&root,12);

  if(root)
    {
    printf("\n Given value is :");
    inorder_show(root);
    printf("\n BST value Between [ 10 - 22 ] is :");
    print_btw_value(root,10,22);
    root=free_node(root);
    }
  else
      printf("\n Empty Tree ");
  return 0;

}
