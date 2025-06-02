#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};
typedef struct node Node;
Node *top = NULL;

void push();
void pop();
void peek();
void display();

int main(){
    int choice = 1;
    printf("-----------------------------------\n");
    printf("--------------STACK----------------\n");
    printf("1. PUSH \n");
    printf("2. POP \n");
    printf("3. PEEK \n");
    printf("4. DISPLAY \n");
    printf("0. EXIT\n");
    printf("-----------------------------------\n");
    while(choice != 0){
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                printf("Exiting.....");
                return 0;
            default: printf("Enter a valid option!!\n"); 
        }
    }
    return 0;
}

void push(){
    Node *newnode = (Node *)malloc(sizeof(Node));
    printf("Enter Data :");
    scanf("%d",&newnode->data);
    newnode->next = top;
    top = newnode;
}

void pop(){
    Node *temp = top;
    if(temp == NULL) printf("Stack Underflow!!\n");
    else{
        printf("Popped Element : %d \n",top->data);
        top = top->next;
        free(temp);
    }
}

void peek(){
    if(top == NULL) printf("Stack Underflow!!\n");
    else{
        printf("Top element : %d \n",top->data);
    }
}

void display(){
    Node *temp = top;
    if(temp == NULL) printf("Stack Underflow");
    else{
        while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
        }
    }
    printf("\n");
}