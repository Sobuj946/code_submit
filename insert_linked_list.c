#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};

int main(){
    struct node *head,*newnode,*temp;
    head=NULL;
    int choice=1,count=0;
    while(choice)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
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
    printf("Do you want continue press(1,0):");
    scanf("%d",&choice);
    }
    printf("print the element:");
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n%d",count);
    int pos,i=1;
    printf("Enter postion:");
    scanf("%d",&pos);
  
    if (pos < 1 || pos > count + 1) {
        printf("Invalid position.\n");
    } else {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter value: ");
        scanf("%d", &newnode->data);

        if (pos == 1) { // Insert at the beginning
            newnode->next = head;
            head = newnode;
        } else {
            temp = head;
            for (i = 1; i < pos - 1; i++) {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
        count++;
    }
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
       
    }
    return 0;
}