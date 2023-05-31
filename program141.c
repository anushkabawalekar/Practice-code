// problems on string
//take String from user and count number of capital characters from it

#include<stdio.h>

int strLenCapitalX(char *str)
{
    int iCount=0;

    while(*str!='\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            iCount++;
        }    
         str++;
    }
    return iCount;
}

int main()
{
    char Arr[40];
    int iRet=0;

    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);

    iRet=strLenCapitalX(Arr);    

    printf("Number of Capital letters are:%d\n",iRet);

    return 0;
}