#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

//typedef struct node Node; // replacing struct node with Node

void create();
void insertatbeg();
void insertatend();
void insertatpos();
void insertafteraposition();
void deleteatbeg();
void deleteatend();
void deleteatpos();
void reverse();
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
    choice = 1;
    display();
    printf("-------------------------------------\n");
    printf("1) Inserting at the beginning\n");
    printf("2) Inserting at the end\n");
    printf("3) Inserting at a position\n");
    printf("4) Inserting after a position\n");
    printf("5) Deleting at the beginning\n");
    printf("6) Deleting at the end\n");
    printf("7) Deleting at a position\n");
    printf("8) Reverse\n");
    printf("9) Display\n");
    printf("0) Exit\n");
    printf("-------------------------------------\n");
    while(choice != 0){
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: insertatbeg(); break;
            case 2: insertatend(); break;
            case 3: insertatpos(); break;
            case 4: insertafteraposition(); break;
            case 5: deleteatbeg(); break;
            case 6: deleteatend(); break;
            case 7: deleteatpos(); break;
            case 8: reverse(); break;
            case 9: display(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }

    }
    return 0;
}

void create(){
    int data;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->next = NULL;
    printf("Enter Data : ");
    scanf("%d",&newnode->data);
    if(head == NULL){
        head = tail = newnode;
    }
    else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void insertatbeg(){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->next = head;
    printf("Enter Data : ");
    scanf("%d",&newnode->data);
    head->prev = newnode;
    head = newnode;    
}

void insertatend(){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next = NULL;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    printf("Enter Data :");
    scanf("%d",&newnode->data); 
}

void insertatpos(){
    struct node *newnode,*temp = head,*previous;
    newnode = (struct node *)malloc(sizeof(struct node));
    int position,i = 1;
    printf("Enter which position u want to insert :");
    scanf("%d",&position);
    if(position > 1){
        while(i<position){
            temp = temp->next;
            i++;
        }
        printf("Enter Data :");
        scanf("%d",&newnode->data); 
        newnode->prev = temp->prev;
        newnode->next = temp;
        temp->prev = newnode;
        temp = newnode->prev;
        temp->next = newnode;
    } 
    else if(position == 1){
        insertatbeg();
    }
    else{
        printf("Wrong position!!"); 
    }
}

void insertafteraposition(){
    struct node *newnode,*temp = head,*previous;
    newnode = (struct node *)malloc(sizeof(struct node));
    int position,i = 1;
    printf("Enter which position u want to insert :");
    scanf("%d",&position);
    if(position >= 1){
        while(i <= position){
            temp = temp->next;
            i++;
        }
        printf("Enter Data :");
        scanf("%d",&newnode->data); 
        newnode->prev = temp->prev;
        newnode->next = temp;
        temp->prev = newnode;
        temp = newnode->prev;
        temp->next = newnode;
    } 
    else{
        printf("Wrong position!!"); 
    }
}

void deleteatbeg(){
    struct node *temp;
    temp = head; 
    if (head == NULL){
        printf("the list is empty");
    }
    else{
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
}

void deleteatend(){
    struct node *temp;
    temp = tail;
    if (tail == NULL){
        printf("the list is empty");
    }
    else{
        tail = tail->prev;
        tail->next = NULL;
        free(temp);
    } 
}

void deleteatpos(){
    struct node *temp = head;
    int position,i = 1;
    printf("Enter which position u want to insert :");
    scanf("%d",&position);
    if(position >= 1){ 
        while(i < position){
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    } 
    else{
        printf("Wrong position!!"); 
    }
}

void reverse(){
    struct node *temp;
    temp = head;
    head = tail;
    tail = head;
    temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

void display(){
    struct node *temp = head;
    while(temp != 0){
        printf("%d  ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}