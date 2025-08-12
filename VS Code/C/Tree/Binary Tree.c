#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

typedef struct node Node;

Node *create(){
    int data;
    Node *newNode = (Node*)malloc(sizeof(Node));
    printf("Enter Data (-1 for no node) : ");
    scanf("%d",&data);
    if(data == -1) {
        free(newNode);
        return NULL; // Return NULL if -1 is entered
    }
    newNode->data = data;
    printf("Enter left child of %d\n", data);
    newNode->left = create(); // Recursively create left subtree
    printf("Enter right child of %d\n", data);
    newNode->right = create(); // Recursively create right subtree
    return newNode; // Return the newly created node
}

int main() {
    Node *root = create();//contains root address of the tree
    return 0;
}