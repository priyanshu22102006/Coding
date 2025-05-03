/*Print the following pattern
A
BB
CCC
DDDD
EEEEE*/
#include<stdio.h>
int main(){
    int size,alpha = 65;
    printf("Enter no of rows : ");
    scanf("%d",&size);
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j <= i ; j++){
            printf("%c",alpha);
        }
        alpha += 1;
        printf("\n");
    }
    return 0;
}