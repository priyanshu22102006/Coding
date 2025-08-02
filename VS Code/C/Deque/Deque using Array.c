#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5 // Defines the maximum size of the deque

int dq[MAX_SIZE];
int front = -1, rear = -1;

// Function to check if the deque is full
int isFull() {
    return ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1));
}

// Function to check if the deque is empty
int isEmpty() {
    return (front == -1);
}

// --- INSERTION OPERATIONS ---

// Adds an element to the front of the deque
void insertFront(int item) {
    if (isFull()) {
        printf("⚠️ Overflow: Deque is full.\n");
        return;
    }

    if (front == -1) { // If deque is initially empty
        front = 0;
        rear = 0;
    } else if (front == 0) { // If front is at the first position
        front = MAX_SIZE - 1;
    } else { // Decrement front pointer
        front = front - 1;
    }
    dq[front] = item;
    printf("✅ Inserted %d at the front.\n", item);
}

// Adds an element to the rear of the deque
void insertRear(int item) {
    if (isFull()) {
        printf("⚠️ Overflow: Deque is full.\n");
        return;
    }

    if (front == -1) { // If deque is initially empty
        front = 0;
        rear = 0;
    } else if (rear == MAX_SIZE - 1) { // If rear is at the last position
        rear = 0;
    } else { // Increment rear pointer
        rear = rear + 1;
    }
    dq[rear] = item;
    printf("✅ Inserted %d at the rear.\n", item);
}


// --- DELETION OPERATIONS ---

// Deletes an element from the front of the deque
void deleteFront() {
    if (isEmpty()) {
        printf("❌ Underflow: Deque is empty.\n");
        return;
    }
    printf("🗑️ Deleted %d from the front.\n", dq[front]);

    if (front == rear) { // If only one element is present
        front = -1;
        rear = -1;
    } else if (front == MAX_SIZE - 1) { // If front is at the last position
        front = 0;
    } else { // Increment front to remove the current front
        front = front + 1;
    }
}

// Deletes an element from the rear of the deque
void deleteRear() {
    if (isEmpty()) {
        printf("❌ Underflow: Deque is empty.\n");
        return;
    }
    printf("🗑️ Deleted %d from the rear.\n", dq[rear]);

    if (front == rear) { // If only one element is present
        front = -1;
        rear = -1;
    } else if (rear == 0) { // If rear is at the first position
        rear = MAX_SIZE - 1;
    } else { // Decrement rear
        rear = rear - 1;
    }
}

// --- DISPLAY OPERATION ---

// Displays all the elements of the deque
void display() {
    if (isEmpty()) {
        printf("🧊 Deque is empty.\n");
        return;
    }
    printf("Deque elements are: ");
    int i = front;
    while (1) {
        printf("%d ", dq[i]);
        if (i == rear) break;
        i = (i + 1) % MAX_SIZE;
    }
    printf("\n");
}


// --- MAIN DRIVER FUNCTION ---

int main() {
    int choice, item;
    printf("\n--- Deque Operations Menu (Size: %d) ---\n", MAX_SIZE);
    while (1) {
        printf("\n1. Insert at Front\n");
        printf("2. Insert at Rear\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from Rear\n");
        printf("5. Display Deque\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert at front: ");
                scanf("%d", &item);
                insertFront(item);
                break;
            case 2:
                printf("Enter the element to insert at rear: ");
                scanf("%d", &item);
                insertRear(item);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting program. Goodbye! 👋\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}