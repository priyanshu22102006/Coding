#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

int main(){
    int choice = 1;
    while(choice !=0){
        
        printf("Enter your choice:");
        scanf("%d",&choice);    
    }
    
    return 0;
}