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