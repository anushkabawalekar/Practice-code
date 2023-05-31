// problems on string
//take String from user and count number of z  in it.

#include<stdio.h>

int CountChar(char *str,char cValue)
{
    int iCount=0;

    while(*str!='\0')
    {
        if((*str==cValue))
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
    char ch='\0';

    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);

    printf("Enter Character:\n");
    scanf("%c",&ch);

    iRet=CountChar(Arr,ch);    

    printf("Number of occurrenceas  are:%d\n",iRet);

    return 0;
}