#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int data;  // value
        struct node *next; // pointer to next node
    };
    // we are using "struct node" as a datatype for our linked list like "int", "float" etc.
    struct node *head = NULL,*newNode,*temp; // head node stores the address of a node
    int choise = 1,count = 0;
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
    temp = head;
    while(temp!=0){
        count ++;
        printf("%d ",temp->data);
        temp = temp->next;
    }
    int desire=1, position;;
    printf("\n \n-----------------------------------------------------------");
    printf("\nSelect operations to be done on list: \n1) Insertion at Begening \n2) Insertion at End \n3) Insertion after a given Data \n4) Insertion before a given Data \n5) Deletion from Begening \n6) Deletion from the end \n7) Deletion after a given Data \n8) Deletion before a given Data \n9) Print list \nTo EXIT loop press 0\n");
    printf("-----------------------------------------------------------\n");
    while(desire!=0){
        scanf("%d",&desire);
        switch(desire){
            case 0:
                break; 
            case 1:
                newNode = (struct node*)malloc(sizeof(struct node));
                printf("Enter data :");
                scanf("%d",&newNode->data);
                newNode->next = head;
                head = newNode;
            break;
            case 2:
                newNode = (struct node*)malloc(sizeof(struct node));
                printf("Enter data :");
                scanf("%d",&newNode->data);
                temp = head;
                while(temp->next!=0){
                    temp=temp->next;
                }
                newNode->next = NULL;
                temp->next = newNode;
            break;
            case 3:
                printf("Enter position: "); 
                scanf("%d",&position);
                newNode = (struct node*)malloc(sizeof(struct node));
                printf("Enter data :");
                scanf("%d",&newNode->data);
                if(position<=count){
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
            break;
            case 4:
                printf("Enter a "); 
                scanf("%d",&position);
                newNode = (struct node*)malloc(sizeof(struct node));
                printf("Enter data :");
                scanf("%d",&newNode->data);
                if(position==1){
                    //use insertion at begening
                    newNode = (struct node*)malloc(sizeof(struct node));
                    printf("Enter data :");
                    scanf("%d",&newNode->data);
                    newNode->next = head;
                    head = newNode;
                }
                else if(position>2 && position<=count){
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
            break;
            case 5:
                temp = head;
                head = head->next;
                free(temp);
            break;
            case 6:
                struct node * prevnode;
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
            break;
            case 7:
                printf("Enter a ");
                scanf("%d",&position);
                if(position<=count){
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
            break;
            case 8:
                printf("Enter a ");
                scanf("%d",&position);
                if(position==1){
                    //use deletion from begening
                    temp = head;
                    head = head->next;
                    free(temp);
                }
                else if(position>=2 && position<=count){
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
            case 9:
                temp = head;
                while(temp!=0){
                    printf("%d ",temp->data);
                    temp = temp->next;
                }
                printf("\n"); 
            break;
            default: printf("Enter from the following list bitch....."); 
        }
    }

    getchar();
}