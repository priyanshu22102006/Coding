/*Print the following pattern
1
12
123
1234
12345*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    for(int i = 0 ; i < num ; i++){
        int alpha = 65;
        for(int j = 0 ; j <= i ; j++){
            printf("%d",j+1);
            alpha += 2;
        }
        printf("\n");
    }
    return 0;
}