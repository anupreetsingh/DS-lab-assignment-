//Anupreet singh roll no.11911063
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
}*head;

void createnode(int n)
{
    head=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("Enter the data of the first node:\n");
    scanf("%d",&x);
    head->data=x;
    head->link=NULL;
    struct node*temp=head;
    for(int i=2;i<=n;i++)
    {
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of newnode:\n");
        scanf("%d",&x);
        newnode->data=x;
        newnode->link=NULL;
        temp->link=newnode;
        temp=temp->link;
    }
    printf("Linkest list of %d nodes is successfully created\n",n);
        
}

void delete()
{
    int x;
    printf("Enter data of node which you want to delete from the linked list:");
    scanf("%d",&x);
    struct node*temp=head;
    for(int i=1;temp->link->data!=x;i++)
        temp=temp->link;
    struct node*temp1=temp->link;
    temp->link=temp->link->link;
    free(temp1);
    temp1=NULL;
    printf("The required node has been removed\n");
}

void traverse()
{
    struct node*temp=head;
    for(int i=1;temp!=NULL;i++)
    {
        printf("The data of the node %d is %d\n",i,temp->data);
        temp=temp->link;
    }
}

int main()
{
    int n;
    printf("Enter the number nodes in the linked list:\n");
    scanf("%d",&n);
    createnode(n);
    traverse();
    delete();
    traverse();
    
    
}
