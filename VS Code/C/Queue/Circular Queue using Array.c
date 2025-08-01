#include<stdio.h>
int front = -1, rear = -1, size;

void enqueue(int arr[]){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if (front ==-1 && rear == -1){
        front = rear = 0;
        arr[front] = num;
    }
    else if((rear+1)%size == front){
        printf("Queue is full!!\n");
    }
    else{
       rear = (rear+1)%size ;
       arr[rear] = num;
    }
}

void dequeue(int arr[]){
    if(front == -1 && rear == -1){
        printf("Queue is empty!!\n");
    }
    else if(front == rear){
        printf("Dequeued element is %d.\n", arr[front]);
        front = rear = -1;
    }
    else{
        printf("Dequeued element is %d.\n", arr[front]);
        front = (front + 1) % size;
    }
}

void display(int arr[]){
    if(front == -1 && rear == -1){
        printf("Queue is empty!!\n");
    }
    else{
        int i = front;
        printf("QUEUE : ");
        while(i != rear){
            printf("%d ",arr[i]);
            i = (i+1) % size;
        }
        printf("%d ",arr[rear]);
    }
}

int main(){
    printf("--------------------------------------\n");
    printf("----------------QUEUE-----------------\n");
    printf("|1. ENQUEUE \n|2. DEQUEUE \n|3. PEEK \n|4. DISPLAY \n|0. EXIT\n");
    printf("--------------------------------------\n");
    int choice = 1;
    printf("Enter the size of the queue: ");
    scanf("%d", &size);
    int queue[size];
    while(choice!=0){
        printf("Enter an option : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue(queue);
                break;
            case 2:
                dequeue(queue);
                break;
            case 3:
                // peek();
                break;
            case 4:
                display(queue);
                break;
            case 0:
                printf("Exiting...");
                return 0;
            default: printf("Choose correct option!!\n");
        }
    }
    return 0;
}