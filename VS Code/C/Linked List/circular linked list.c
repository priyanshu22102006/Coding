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
int length();

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

void insertatbeg(){
    Node *newnode = (Node *)malloc(sizeof(Node));
    printf("Enter Data : ");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
    tail->next = newnode;
}

void insertatend(){
    Node *newnode = (Node *)malloc(sizeof(Node));
    printf("Enter Data : ");
    scanf("%d",&newnode->data);
    tail->next = newnode;
    newnode->next = head;
    tail = newnode;
}

void insertatpos(){
    Node *temp = head, *newnode = (Node *)malloc(sizeof(Node));
    int position, i = 1, size = length();
    printf("Enter Position : ");
    scanf("%d",&position);
    if(position > 1 && position <= size){
        while(i < position-1){
            temp = temp->next;
            i++;
        }
        printf("Enter Data :");
        scanf("%d",&newnode->data); 
        newnode->next = temp->next;
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
    Node *temp = head, *newnode = (Node *)malloc(sizeof(Node));
    int position, i = 1, size = length();
    printf("Enter position :");
    scanf("%d",&position);
    if(position >= 1 && position < size){
        while(i < position){
            temp = temp->next;
            i++;
        }
        printf("Enter Data :");
        scanf("%d",&newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
    else if(position == size){
        insertatend();
    }
    else printf("Wrong Position!!");
}

void deleteatbeg(){
    Node *temp = head;
    head = head->next;
    tail->next = head;
    free(temp);
}

void deleteatend(){
    Node *temp = tail;
    while(tail->next != temp){
        tail = tail->next;
    }
    tail->next = head;
    free(temp);
}

void deleteatpos(){
    int position, i = 1, size = length();
    printf("Enter position :");
    scanf("%d",&position);
    if(position < 1 || position > size){
        printf("Wrong Position!!");
        return;
    }
    if(position == 1){
        deleteatbeg();
        return;
    }
    Node *temp = head;
    Node *prev = NULL;
    while(i < position){
        prev = temp;
        temp = temp->next;
        i++;
    }
    prev->next = temp->next;
    if(temp == tail) // If deleting the last node, update tail
        tail = prev;
    free(temp);
}

void reverse(){
    Node *prev, *current = tail->next, *next = current->next;
    if(head == NULL || head->next == head) return; // Empty or single node case
    else{
        while(current != tail){
            prev = current;
            current = next;
            next = current->next;
            current->next = prev;
        }
        next->next = tail; // Last node points to the new head
        head = tail; // Update head to the old tail
        tail = next; // Update tail to the old head
    }
}

void display(){
    Node *temp;
    if(tail == NULL) printf("The linked list is empty");
    else{
        temp = tail->next;
        while(temp->next != tail->next){
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("%d ",temp->data);
    }
    printf("\n");
}

int length(){
    int size = 1;
    Node *temp = head;
    while(temp->next != head){
        size++;
        temp = temp->next;
    }
    return size;
}