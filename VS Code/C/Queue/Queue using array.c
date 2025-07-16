#include<stdio.h> 

int front = -1, rear = -1;  //Global declaration of front and rear

int enqueue(int que[], int num, int size){
    if (rear == size - 1) {  // Check if queue is full
        printf("Queue is full!\n");  // Queue is full
        return -1;
        
    } 
    else if (front == -1 && rear == -1) {  // If queue is empty
        front = rear = 0;
        que[rear] = num;  // Insert the first element
    } 
    else {
        rear++;  // Move rear to the next position
        que[rear] = num;  // Insert the new element
    }
    return 0;
}

int dequeue(int que[]){
    if (front == -1) {  // If queue is empty
        printf("Queue is empty!\n");  // Check if queue is empty
        return -1;
    } 
    else if (front == rear) {  // If there is only one element
        printf("Dequeued element: %d\n", que[front]);
        front = rear = -1;  // Reset front and rear
    } 
    else {
        printf("Dequeued element: %d\n", que[front]);  // Print the dequeued elemen
        front++;  // Move front to the next position
    }
    return 0;
}

int display(int que[]){
    if (front == -1) {  // If queue is empty
        printf("Queue is empty!\n");  // Check if queue is empty
        return -1;
    } 
    else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {  // Display all elements in the queue
            printf("%d ", que[i]);
        }
        printf("\n");
    }
    return 0;
}

int peek(int que[]){
    if (front == -1) {  // If queue is empty
        printf("Queue is empty!\n");  // Check if queue is empty
        return -1;
    } 
    else {
        printf("Front element: %d\n", que[front]);  // Print the front element
    }
    return 0;
}

int main(){
    int size;
    printf("Enter the size of the queue: ");
    scanf("%d", &size);
    int queue[size];  //Queue declaration
    int choice = 1, element;
    while (choice != 0)
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: // Enqueue operation
                printf("Enter the element to enqueue: ");
                scanf("%d", &element);
                enqueue(queue, element, size);
                break;
                
            case 2: // Dequeue operation
                dequeue(queue);
                break;
                
            case 3: 
                display(queue);
                break;

            case 4: // Peek operation
                peek(queue);
                break;
                
            case 0: 
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}