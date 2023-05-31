// problems on string
//take String from user and replace small letter with its correponding capital letter and capital letter with its correponding small letter

#include<stdio.h>

void strToggleX(char *str)
{
    while(*str!='\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str=*str-32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str=*str+32;
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