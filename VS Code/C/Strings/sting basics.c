#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    // scanf("%s",str); //only 1st word is considered
    gets(str);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        printf("%c",str[i]);
    }
    printf("\n");
    printf("%s",str);
    puts(str);
    //Different operations on string
    //1.) Append
        char str1[20], str2[20];
        printf("Enter first string: ");
        gets(str1);
        printf("Enter second string: ");
        gets(str2);
        strcat(str1,str2); //concatenate two strings
        puts(str1); //print concatenated string
    //2.) Insert
        char str3[20], str4[20];
        printf("Enter first string: ");
        gets(str3);
        printf("Enter second string: ");
        gets(str4);
        int pos;
        printf("Enter position to insert: ");
        scanf("%d",&pos);
        char str5[40];
        strncpy(str5,str3,pos); //copy first part of first string
        str5[pos] = '\0'; //null terminate the string
        strcat(str5,str4); //concatenate second string
        strcat(str5,str3+pos); //concatenate remaining part of first string
        puts(str5); //print inserted string
    //3.) Delete
        char str6[20];
        printf("Enter string: ");
        gets(str6);
        int start, end;
        printf("Enter start and end position to delete: ");
        scanf("%d%d",&start,&end);
        char str7[40];
        strncpy(str7,str6,start); //copy first part of string
        str7[start] = '\0'; //null terminate the string
        strcat(str7,str6+end); //concatenate remaining part of string
        puts(str7); //print deleted string
    //4.) Replace
        char str8[20], str9[20];
        printf("Enter string: ");
        gets(str8);
        printf("Enter string to replace: ");
        gets(str9);
        char str10[40];
        int pos1;
        printf("Enter position to replace: ");
        scanf("%d",&pos1);
        strncpy(str10,str8,pos1); //copy first part of string
        str10[pos1] = '\0'; //null terminate the string
        strcat(str10,str9); //concatenate second string
        strcat(str10,str8+pos1+strlen(str9)); //concatenate remaining part of first string
        puts(str10); //print replaced string
    //5.) Compare
        char str11[20], str12[20];
        printf("Enter first string: ");
        gets(str11);
        printf("Enter second string: ");
        gets(str12);
        int cmp = strcmp(str11,str12); //compare two strings
        if(cmp == 0){
            printf("Strings are equal\n");
        }
        else if(cmp < 0){
            printf("First string is less than second string\n");
        }
        else{
            printf("First string is greater than second string\n");
        }
    //6.) Find
        char str13[20], str14[20];
        printf("Enter string: ");
        gets(str13);
        printf("Enter substring to find: ");
        gets(str14);
        char *ptr = strstr(str13,str14); //find substring in string
        if(ptr != NULL){
            printf("Substring found at position: %ld\n",ptr-str13);
        }
        else{
            printf("Substring not found\n");
        }
    //7.) Length
        char str15[20];
        printf("Enter string: ");
        gets(str15);
        int len = strlen(str15); //length of string
        printf("Length of string: %d\n",len);
    //8.) Reverse
        char str16[20];
        printf("Enter string: ");
        gets(str16);
        int len1 = strlen(str16); //length of string
        char str17[20];
        for(int i=0;i<len1;i++){
            str17[i] = str16[len1-i-1]; //reverse string
        }
        str17[len1] = '\0'; //null terminate the string
        puts(str17); //print reversed string
    //9.) Uppercase
        char str18[20];
        printf("Enter string: ");
        gets(str18);
        for(int i=0;i<strlen(str18);i++){
            if(str18[i] >= 'a' && str18[i] <= 'z'){
                str18[i] = str18[i]-32; //convert to uppercase
            }
        }
        puts(str18); //print uppercase string
    //10.) Lowercase
        char str19[20];
        printf("Enter string: ");
        gets(str19);
        for(int i=0;i<strlen(str19);i++){
            if(str19[i] >= 'A' && str19[i] <= 'Z'){
                str19[i] = str19[i]+32; //convert to lowercase
            }
        }
        puts(str19); //print lowercase string   
    //11.) Swap case
        char str20[20];
        printf("Enter string: ");
        gets(str20);
        for(int i=0;i<strlen(str20);i++){
            if(str20[i] >= 'a' && str20[i] <= 'z'){
                str20[i] = str20[i]-32; //convert to uppercase
            }
            else if(str20[i] >= 'A' && str20[i] <= 'Z'){
                str20[i] = str20[i]+32; //convert to lowercase
            }
        }
        puts(str20); //print swapped case string
    return 0;
}