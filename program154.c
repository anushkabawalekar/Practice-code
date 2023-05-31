// problems on string
//take String from user and find whitespace and replace with _ and return string
#include<stdio.h>

void EditString(char *str)
{
    while(*str!='\0')
    {
        if(*str==' ')
        {
            *str='_';
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);

    EditString(Arr);   

    printf("String after editing is:%s\n",Arr);         

    return 0;
}