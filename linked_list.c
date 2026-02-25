#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    insertbeginning(10);
    insertbeginning(20);
    insertbeginning(30);

    traverse();
    
    return 0;
}
