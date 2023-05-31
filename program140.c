// problems on string
//take String from user and count number of small characters from it

#include<stdio.h>

int strLenSmallX(char *str)
{
    int iCount=0;

    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
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

    iRet=strLenSmallX(Arr);    

    printf("Number of small letters are:%d\n",iRet);

    return 0;
}