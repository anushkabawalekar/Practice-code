// problems on string
//take String from user and searching character from user and find first occrrrence of that character from string
//updation code

#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurrence(char *str,char cValue)
{
    int iCnt=1;

    while((*str!='\0') && (*str!=cValue))
    {   
        str++;
        iCnt++;
    }

    if(*str=='\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }   
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

    iRet=FirstOccurrence(Arr,ch);              

    if(iRet==-1)                    
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("First occurrence of that character is at:%d\n",iRet);
    }

    return 0;
}