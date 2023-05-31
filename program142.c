// problems on string
//take String from user and count number of digits from it

#include<stdio.h>

int strLenDigitsX(char *str)
{
    int iCount=0;

    while(*str!='\0')
    {
        if((*str>='0') && (*str<='9'))
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

    iRet=strLenDigitsX(Arr);    

    printf("Number of Digits are:%d\n",iRet);

    return 0;
}