//problems on string
// take string from user and check it is palindrome or not 

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(char *str)
{
    char *start=NULL;
    char *end=NULL;
    bool bFlag=true;

    start=str;
    end =str;

    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        if(*start != *end)
        {
            bFlag=false;
            break;
        }
        start++;
        end--;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    bool bRet=false;
    
    printf("Enter String:\n");
    scanf("%[^\n]s",Arr);

    bRet=CheckPalindrome(Arr);

    if(bRet==true)
    {
        printf("String is Palindrome\n");
    }  
    else
    {
        printf("String is not Palindrome\n");
    }

    return 0;
}