// problems on string
//take String from user and copy only small letters one string into another string 

#include<stdio.h>

void strcpySmall(char *src,char *dest)
{
    while(*src!='\0')
    {
        if((*src>='a') && (*src<='z'))
        {
            *dest=*src;
            *dest++;
        }
        *src++;
    }
    *dest='\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);

    strcpySmall(Arr,Brr);   

    printf("String after copy is:%s\n",Brr);         

    return 0;
}