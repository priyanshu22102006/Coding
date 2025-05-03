/*Print the following pattern
A
AC
ACE
ACEG
ACEGI*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    for(int i = 0 ; i < num ; i++){
        int alpha = 65;
        for(int j = 0 ; j <= i ; j++){
            printf("%c", alpha);
            alpha += 2;
        }
        printf("\n");
    }
    return 0;
}