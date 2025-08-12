#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;  // value
    struct node *next; // pointer to next node
};// we are using "struct node" as a datatype for our linked list like "int", "float" etc.

struct node *head = NULL,*temp;

int size(){
    temp = head;
    int count = 0;
    while(temp!=NULL){
        count ++;
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return count;
}

void insertatbegining(){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data :");
    scanf("%d",&newNode->data);
    newNode->next = head;
    head = newNode;
}

void insertatend(){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data :");
    scanf("%d",&newNode->data);
    temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    newNode->next = NULL;
    temp->next = newNode;
}

void insertafteradata(){
    int position;
    printf("Enter position: "); 
    scanf("%d",&position);
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data :");
    scanf("%d",&newNode->data);
    if(position<=size()){
        temp = head;
        while(position>1){
            temp=temp->next;
            position--;
        }
        struct node *next = temp->next;
        temp->next = newNode;
        newNode->next = next;                
    }
    else{
    printf("Invalid Input..!");
    }
}

void insertbeforeadata(){
    int position;
    printf("Enter a "); 
    scanf("%d",&position);
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data :");
    scanf("%d",&newNode->data);
    if(position==1){
        //use insertion at begening
        void insertatbegining();
    }
    else if(position>2 && position<=size()){
        temp = head;
        while(position>2){
            temp=temp->next;
            position--;
        }
        struct node *next = temp->next;
        newNode->next = next;
        temp->next = newNode;                                    
    }
    else{
        printf("Invalid Input..!");
    }
}

void deletefrombegining(){
    temp = head;
    head = head->next;
    free(temp);
}

void deletefromend(){
    struct node *prevnode;
    int loop=1;
    temp = prevnode = head;
    while(temp->next!=NULL){
        if (loop>1){
            temp=temp->next;
            prevnode = prevnode->next;
        }
        else{
            temp=temp->next;
            loop++;
        }
    }
    prevnode->next=NULL;
    free(temp);
}

void deleteafteradata(){
    int position;
    printf("Enter a ");
    scanf("%d",&position);
    if(position<=size()){
        temp = head;
        while(position>1){
            temp=temp->next;
            position--;
        }
        struct node *next = temp->next->next; // temp->next is the node to be deleted and temp->next->next is the node that will be stored
        free(temp->next);
        temp->next = next;
    }
    else{
        printf("Invalid Input..!");
    }
}

void deletebeforeadata(){
    int position;
    printf("Enter a ");
    scanf("%d",&position);
    if(position==1){
        //use deletion from begening
        void deletefrombegining();
    }
    else if(position>=2 && position<=size()){
        int loop=1;
        struct node * prevnode;
        temp = prevnode = head;
        while(position>1){
            if (loop>1){
                temp=temp->next;
                prevnode = prevnode->next;
            }
            else{
                temp=temp->next;
                loop++;
            }
            position--;
        }
        prevnode->next = temp->next;
        free(temp);
    }
    else{
        printf("Invalid Input..!");
    }
}

void display(){
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    struct node *newNode,*temp; // head node stores the address of a node
    int choise = 1;
    while(choise==1){
        newNode = (struct node*)malloc(sizeof(struct node)); //malloc() is used to allocate memory and returns a pointer to the allocated memory
                                                             //size of node is 8 byte so malloc will allocate a node of 8 byte 4 for data and 4 for address
        printf("Enter data: ");
        scanf("%d",&newNode->data);
        newNode->next = NULL;
        if(head == NULL){
            head = temp = newNode;
        }
        else{
            temp->next = newNode;
            temp=newNode;
        }
        printf("Do you want to continue(1/0): ");
        scanf("%d",&choise);
    }
    
    int desire=1;
    printf("\n \n-----------------------------------------------------------");
    printf("\nSelect operations to be done on list: \n1) Insertion at Begening \n2) Insertion at End \n3) Insertion after a given Data \n4) Insertion before a given Data \n5) Deletion from Begening \n6) Deletion from the end \n7) Deletion after a given Data \n8) Deletion before a given Data \n9) Print list \nTo EXIT loop press 0\n");
    printf("-----------------------------------------------------------\n");
    while(desire!=0){
        scanf("%d",&desire);
        switch(desire){
            case 0:
                break; 
            case 1:
                void insertatbegining();
                break;
            case 2:
                void insertatend();
                break;
            case 3:
                void insertafteradata();              
                break;
            case 4:
                void insertbeforeadata();
                break;
            case 5:
                void deletefrombegining();
                break;
            case 6: 
                void deletefromend();    
                break;
            case 7:
                void deleteafteradata();
                break;
            case 8:
                void deletebeforeadata();
                break;
            case 9:
                printf("The list is: ");
                display();
                printf("\n"); 
                break;
            default: printf("Enter from the following list bitch....."); 
        }
    }

    return 0;
}