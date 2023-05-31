// problems on string
//take character from user and check whther it is small or not

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
    if((cValue>='a') && (cValue<='z'))       //if(cValue>='65' && cValue<='90') 
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

    bRet=CheckSmall(ch);

    if(ch==true)
    {
        printf("%c is small letter\n",ch);
    }
    else
    {
        printf("%c is not small letter\n",ch);
    }

    return 0;
}