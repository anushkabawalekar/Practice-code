//problems on string
// take 2 string from user and compare that strings are same or not
//updated code
//case insensitive

#include<stdio.h>
#include<stdbool.h>

bool stricmpX(char *str1,char *str2)
{
    while(*str1!='\0' && *str2!='\0')
    {
        if(*str1 != *str2)                     //letetrs are differenty
        {
             if((*str1 >= 'a') && (*str1 <= 'z'))           // first letter is small
            {
                if(*str1 != (*str2+32))
                {
                    break;
                }
            }
            else if((*str1 >= 'A') && (*str1 <= 'Z'))         //first letetr is capital
            {
                if(*str1 != (*str2-32))
                {
                    break;
                }
            }
            else                                         //special symbols and digits
            {
                break;
            }
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

    bRet=stricmpX(Arr,Brr);  

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