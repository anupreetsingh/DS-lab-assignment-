//Anupreet Singh  roll no.11911063
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
}*head;


void createnode(int n)
{
    head=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head;
    int x;
    printf("Enter the data of first node:");
    scanf("%d",&x);
    head->data=x;
    head->next=NULL;
    head->prev=NULL;
    for(int i=2;i<=n;i++)
    {
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of new node:");
        scanf("%d",&x);
        newnode->data=x;
        newnode->next=NULL;
        newnode->prev=temp;
        temp->next=newnode;
        temp=temp->next;
    }
    printf("Doubly linked list is successfully created\n");
}

void traverse()
{
    struct node*temp=head;
    for(int i=1;temp!=NULL;i++)
    {
        printf("The data of node %d is %d\n",i,temp->data);
        temp=temp->next;
    }
}

void delete()
{
    struct node*temp=head;
    int x;
    printf("Enter the data of node that you want to delete:\n ");
    scanf("%d",&x);
    while(temp->next->data!=x)
        temp=temp->next;
    struct node*temp1=temp->next;
    temp->next=temp1->next;
    temp1->next->prev=temp;
    free(temp1);
    temp1=NULL;
    
}

int main()
{
    int n;
    printf("Enter the number of nodes in the doubly linked list:\n");
    scanf("%d",&n);
    createnode(n);
    traverse();
    delete();
    traverse();
    
    
    
    
}
