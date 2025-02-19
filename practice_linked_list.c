#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main(){
    struct node *newnode,*head,*temp;
    head=NULL;
    int choice=1,count=0;

    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->next=0;
        printf("Enter data:\n");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want continue data ?(1,0) press:\n");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    
    return 0;
}