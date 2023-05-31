// problems on string
//take String from user and count number of vowels from it aeiou or AEIOU

#include<stdio.h>

int CountVowels(char *str)
{
    int iCount=0;

    while(*str!='\0')
    {
        if((*str=='a') || (*str=='A') || (*str=='e') || (*str=='E') || (*str=='i') || (*str=='I') || (*str=='o') || (*str=='O') || (*str=='u') || (*str=='U'))
        {
            iCount++;
        }    
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

    iRet=CountVowels(Arr);    

    printf("Number of Vowels are:%d\n",iRet);

    return 0;
}