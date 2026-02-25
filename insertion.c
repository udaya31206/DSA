#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertbeginning(int data) {
    struct node *newnode, *temp;
    
    newnode = (struct node*)malloc(sizeof(struct node));
    
    if(newnode == NULL){
        printf("Memory allocation failed\n");
        return;
    }
    
    newnode->data = data;
    
    if(head == NULL){
        newnode->next = newnode;
        head = newnode;
    }
    else{
        temp = head;
        
        while(temp->next != head){
            temp = temp->next;
        }
        
        newnode->next = head;
        temp->next = newnode;
        head = newnode;
    }
}

void traverse()
{
    struct node *temp;
    
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        while(temp != head);
        
        printf("\n");
    }
}
void insertAtEnd(int x)
{
    struct node *newnode, *temp;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;

    if (head == NULL)
    {
        newnode->next = newnode;
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->next = head;
    }
}
void delete_at_beginning()
{
    struct node *temp, *last;

    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else if (head->next == head)
    {
        free(head);
        head = NULL;
    }
    else
    {
        last = head;
        while (last->next != head)
        {
            last = last->next;
        }

        temp = head;
        head = head->next;
        last->next = head;
        free(temp);
    }
}
int main()
{
    insertbeginning(10);
    insertbeginning(20);
    insertbeginning(30);
    insertAtEnd(4);
    delete_at_beginning();
    traverse();
    return 0;
}
