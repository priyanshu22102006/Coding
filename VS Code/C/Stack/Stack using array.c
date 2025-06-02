#include<stdio.h>
#include<stdlib.h>

int choice = 1,top = -1, size;

void push(int stack[]);
void pop(int stack[]);
void peek(int stack[]);
void display(int stack[]);

int main(){
    printf("Enter the size of the stack : ");
    scanf("%d",&size);
    int stack[size];
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
                push(stack);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                peek(stack);
                break;
            case 4:
                display(stack);
                break;
            case 0:
                printf("Exiting.....");
                return 0;
            default: printf("Enter a valid option!!\n"); 
        }
    }
    
    return 0;
}

void push(int stack[]){
    int num;
    if(top == size-1) printf("Stack Overflow!!\n");
    else{
        printf("Enter Data : ");
        scanf("%d",&num);
        top ++;
        stack[top] = num;
    }
}
    
void pop(int stack[]){
    if (top == -1) printf("Stack Underflow!!\n");
    else{
        printf("Popped Element : %d\n",stack[top]);
        top--;
    }
}

void peek(int stack[]){
    if (top == -1) printf("Stack Underflow!!\n");
    else{
        printf("Top Element : %d\n",stack[top]);
    }
}

void display(int stack[]){
    if (top == -1) printf("Stack Underflow!!\n");
    else{
        int i = 0;
        while(i<=top){
            printf("%d ",stack[i]);
            i++;
        }
        printf("\n");
    }
}