#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head = NULL;

//typedef struct node Node; // replacing struct node with Node

void create();
void display();

int main(){
    int choice = 1;
    printf("-----------------------------\n");
    printf("Creating a Doubley Linked List\n");
    printf("-----------------------------\n");
    while (choice != 0){
        create();
        printf("\nDo u wanna insert more?(1-yes / 0-no) :");
        scanf("%d",&choice);
    }
    display();
    return 0;
}

void create(){
    int data;
    struct node *newnode, *temp ;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->next = NULL;
    printf("Enter Data : ");
    scanf("%d",&newnode->data);
    if(head == NULL){
        head = temp = newnode;
    }
    else{
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
}

void display(){
    struct node *temp = head;
    while(temp != 0){
        printf("%d  ",temp->data);
        temp = temp->next;
    }
}