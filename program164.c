// problems on string
//take String from user and copy only Capital and small letters by converting to its opposite correponding  one string into another string 

#include<stdio.h>

void strcpyToggle(char *src,char *dest)
{
    while(*src!='\0')
    {
        if((*src>='A') && (*src<='Z'))
        {
            *dest=*src+32;
        }
        else if((*src>='a') && (*src<='z'))
        {
            *dest=*src-32;
        }
        else
        {
            *dest=*src;
        }
        *dest++;
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

    strcpyToggle(Arr,Brr);   

    printf("String after copy is:%s\n",Brr);         

    return 0;
}