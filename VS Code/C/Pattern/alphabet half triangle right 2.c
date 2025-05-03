/*Print the following pattern
A
BC
CDE
DEFG
EFGHI*/
#include<stdio.h>
int main(){
    int size,alpha = 65;
    printf("Enter no of rows : ");
    scanf("%d",&size);
    for(int i = 0 ; i < size ; i++){
        int temp = alpha;
        for(int j = 0 ; j <= i ; j++){
            printf("%c",temp);
            temp += 1;
        }
        alpha += 1;
        printf("\n");
    }
    return 0;
}