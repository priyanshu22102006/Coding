#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

typedef struct Node Node; // struct Node = Node
Node *head,*tail = NULL; 

void enqueue();
void dequeue();
void peek();
void display();

int main(){
    printf("--------------------------------------\n");
    printf("----------------QUEUE-----------------\n");
    printf("|1. ENQUEUE \n|2. DEQUEUE \n|3. PEEK \n|4. DISPLAY \n|0. EXIT\n");
    printf("--------------------------------------\n");
    int choice = 1;
    while(choice!=0){
        printf("Enter an option : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                printf("Exiting...");
                return 0;
            default: printf("Choose correct option!!\n");
        }
    }
}

void enqueue(){
    Node *newnode = (Node*)malloc(sizeof(Node));
    printf("Enter a Number : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(tail == NULL){
        head = tail = newnode;
        tail->next = head;
    }
    else{
        tail->next = newnode;
        tail = newnode;
        tail->next = head;
    }
}

void dequeue(){
    Node *temp = head;
    if(head == NULL && tail == NULL){
        printf("Queue is EMPTY!!\n");
    }
    else if(head == tail){
        head = tail;
        free(temp);
    }
    else{
        head = head->next;
        tail->next = head;
        free(temp);
    }
}

void peek(){
    if(head != NULL && tail != NULL){
        printf("Front element: %d\n", head->data);
    }
    else {
        printf("Queue is empty!\n");
    }
}

void display(){
    if(head != NULL){
        Node* temp = head;
        while(temp->next != head) {
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
    else printf("Queue is EMPTY!!\n");
}