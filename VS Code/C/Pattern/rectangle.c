/*Print the following pattern
****
****
*****/
#include<stdio.h>
int main(){
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}