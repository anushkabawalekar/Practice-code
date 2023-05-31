//problems on string
// take 2 string from user and compare that strings are same or not
//updation code

#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1,char *str2)
{
    for( ; *str1!='\0' && *str2!='\0' && *str1==*str2 ; *str1++,*str2++);   //; is imp

    return (*str1=='\0' && *str2=='\0');
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

    bRet=strcmpX(Arr,Brr);   

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