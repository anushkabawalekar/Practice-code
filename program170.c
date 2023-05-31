//problems on string
// take 2 string from user and compare that strings are same or not

#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1,char *str2)
{
    while(*str1!='\0' && *str2!='\0')
    {
        if(*str1 != *str2)
        {
            break;
        }
        *str1++;
        *str2++;
    }

    if(*str1=='\0' && *str2=='\0')
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
    char Arr[20];
    char Brr[20];
    bool bRet=false;

    printf("Enter first String:\n");
    scanf("%[^\n]s",Arr);

    printf("Enter second String:\n");
    scanf(" %[^\n]s",Brr);

    bRet=strcmpX(Arr,Brr);   //strcmpX(100,200);

    if(bRet==true)
    {
        printf("Both Strings are identical\n");
    }
    else
    {
        printf("Both Strings are different\n");
    }

    return 0;
}