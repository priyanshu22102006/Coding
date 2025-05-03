/*Print the following pattern
* * * * * 
 * * * *
  * * *
   * *
    */
   #include<stdio.h>
   int main(){
       int size;
       printf("Enter no of rows:");
       scanf("%d",&size);
       for(int i = 0 ; i < size ;i++){
           for (int j = 0; j < i; j++){
               printf(" ");
           }
           for(int k = i ; k < size ; k++){
               printf("* ");
           }
           printf("\n");
       }
       return 0;
   }