#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node Node;
Node *head, *tail;

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
    printf("Creating a Circular Linked List\n");
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
    Node *newnode;
    newnode = (Node *)malloc(sizeof(Node));
    printf("Enter Data : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if (head == NULL) head = tail = newnode;
    else{
        tail->next = newnode;
        tail = newnode;
    }
    tail->next = head;
}

void display(){
    Node *temp;
    if(tail == NULL) printf("The linked list is empty");
    else{
        temp = tail->next;
        while(temp->next != tail->next){
            printf("%d",temp->data);
            temp = temp->next;
        }
        printf("%d",temp->data);
    }
}