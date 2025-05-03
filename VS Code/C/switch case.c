#include<stdio.h>
int main(){
    int number1 , number2;

    printf("Enter a number1 :");
    scanf("%d",&number1);

    printf("Enter a number2 :");
    scanf("%d",&number2);

    int choice ;
    printf("1.)sum \n2.)subs \n3.)mul \n4.)div");

    printf("\nEnter your choice:");
    scanf("%d",&choice); // 3

    switch(choice){   //3
        case 1:{
            printf("\nsum is %d",number1+number2);
            //break;
        }
        case 2:{
            printf("\nsubs is %d",number1-number2);
            //break;
        }
        case 3:{
            printf("\nmul is %d",number1*number2);
            //break;
        }
        case 4:{
            printf("\ndiv is %f",number1/number2);
            //break;
        }
        case 5:{
            printf("\nmod is %d",number1%number2);
            break;
        }
        default:printf("error");
    }
    return 0;
}