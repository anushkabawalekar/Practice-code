//problems on string
// take string from user and reverse string contents 

#include<stdio.h>

void strrevX(char *str)
{
    char *start=NULL;
    char *end=NULL;
    char temp='\0';

    start=str;
    end=str;

    while(*end!='\0')
    {
        end++;
    }
    end--;                        //becoz of '\0'

    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
    
}

int main()
{
    char Arr[20];
    
    printf("Enter String:\n");
    scanf("%[^\n]s",Arr);

    strrevX(Arr);

    printf("Reverse string is:%s\n",Arr);   

    return 0;
}