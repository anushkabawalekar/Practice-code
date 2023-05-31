// problems on string
//take String from user and count number of leters from it

#include<stdio.h>

int strLenX(char *str)
{
    int iCount=0;

    while(*str!='\0')
    {
        iCount++;
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

    iRet=strLenX(Arr);        //strLenX(100);

    printf("Length of String:%d\n",iRet);

    return 0;
}