// problems on string
//take String from user and display it
//updation of code

#include<stdio.h>

int main()
{
    char Arr[40];

    printf("Enter your name:\n");
    scanf("%[^\n]s",Arr);                               //takes full name-*

    printf("Your name is:%s",Arr);

    return 0;
}