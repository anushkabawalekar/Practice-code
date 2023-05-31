// problems on string
//take character from user and check whther it is captial or not

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    if((cValue>='A') && (cValue<='Z'))       //if(cValue>='65' && cValue<='90') 
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch='\0';
    bool bRet=false;

    printf("Enter character:\n");
    scanf("%c",&ch);

    bRet=CheckCapital(ch);

    if(ch==true)
    {
        printf("%c is capital letter\n",ch);
    }
    else
    {
        printf("%c is not capital letter\n",ch);
    }

    return 0;
}