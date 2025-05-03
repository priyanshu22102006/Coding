/*Print the following pattern
ABCDE
CDEF
EFG
GH
I*/
#include<stdio.h>
int main(){
    int size,alpha = 65;
    printf("Enter no of rows : ");
    scanf("%d",&size);
    for(int i = 0 ; i < size ; i++){
        int temp = alpha;
        for(int j = 0 ; j < size-i ; j++){
            printf("%c",temp);
            temp+=1;
        }
        alpha += 2;
        printf("\n");
    }
    return 0;
}