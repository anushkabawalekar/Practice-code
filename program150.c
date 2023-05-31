// problems on string
//take String from user and searching character from user and find first occrrrence of that character from string

#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurrence(char *str,char cValue)
{
    int iCnt=1;
    int iPos=ERR_NOTFOUND;

    while(*str!='\0')
    {   
        if(*str==cValue)
        {
            iPos=iCnt;
            break;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char ch='\0';
    int iRet=0;

    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);

    printf("Enter charcater:\n");
    scanf(" %c",&ch);

    iRet=FirstOccurrence(Arr,ch);              // arr:call by address and ch: call by value

    if(iRet==-1)                    //or if(iRet==ERR_NOTFOUND)
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("First occurrence of that character is at:%d\n",iRet);
    }

    return 0;
}