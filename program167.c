// problems on string
//take String from user and concat that string with another string 

#include<stdio.h>

/*
    1: travel till end of dest
    2:copy data from src to dest
    3: write '\0' at the end of dest
*/

void strcatX(char *src,char *dest)
{
    while(*dest!='\0')            //step1
    {
        *dest++;
    }
    
    *dest=' ';             //for space
    *dest++;

    while(*src!='\0')          //step2
    {
        *dest=*src;
        *dest++;
        *src++;
    }

    *dest='\0';            //step3

}

int main()
{
    char Arr[20];
    char Brr[20]="Demo";

    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);

    strcatX(Arr,Brr);   

    printf("String after copy is:%s\n",Brr);         

    return 0;
}