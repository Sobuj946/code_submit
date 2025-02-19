#include<stdio.h>
#include <stdlib.h>
#include<math.h>
struct Node
{
    int data;
    struct Node *next;
};

int main(){
    struct Node *newnode,*head,*temp;
    head=NULL;
    // temp=NULL;
    int choice=1,count=0;
    while(choice){
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("do you want to continue (0,1)");
    scanf("%d",&choice);
}
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
        count++;
    }
    
    return 0;
}