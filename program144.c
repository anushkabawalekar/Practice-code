// problems on string
//take String from user and count number of whitespace  in it.

#include<stdio.h>

bool Count(char *str)
{
    int iCount=0;

    while(*str!='\0')
    {
        if((*str==' '))
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

    iRet=Count(Arr);    

    printf("Number of whitespace are:%d\n",iRet);

    return 0;
}