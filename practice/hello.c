#include<stdio.h>
union abc {
    int a;
    char b;
    float c;
};

void main(){
    union abc u;
    u.a = 9;
    u.b = 97;
    u.c = 9.85;
    printf("a = %d\n",u.a);
    printf("b = %c\n",u.b);
    printf("c = %f\n",u.c);

}