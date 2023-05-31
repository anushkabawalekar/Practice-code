// problems on string
//take String from user and replace small letter with its correponding capital letter and capital letter with its correponding small letter
//updation code

#include<stdio.h>

void strToggleX(char *str)
{
    int Gap='a'-'A';
    while(*str!='\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str=*str-Gap;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str=*str+Gap;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);

    strToggleX(Arr);   

    printf("String after editing is:%s\n",Arr);         

    return 0;
}