// problems on string
//take character from user and check whther it is digit or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char cValue)
{
    if((cValue>='0') && (cValue<='9'))       //if(cValue>='65' && cValue<='90') 
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

    bRet=CheckDigit(ch);

    if(ch==true)
    {
        printf("%c is Digit\n",ch);
    }
    else
    {
        printf("%c is not Digit\n",ch);
    }

    return 0;
}