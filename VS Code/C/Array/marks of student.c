#include<stdio.h>
#include<conio.h>
int main(){
    int student;
    printf("Enter no of students : ");
    scanf("%d",&student);
    int arr[student];
    printf("Enter marks of student :");
    for(int i = 0 ; i<student ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<student ; i++){
        if(arr[i]<35){
            printf("%d ",i+1);
        }
    }
    return 0;
}