#include<stdio.h>
int main(){
    int num;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    for(int i = 0 ; i < num ; i++){
            for(int j = 0 ; j < num ; j++){
                if(i == j || i+j == num-1){
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
            printf("\n");
        }
        return 0;
}