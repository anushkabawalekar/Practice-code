// problems on string
//take String from user and copy that string with another string and just copy number of letters specified by user

#include<stdio.h>

void strncpyX(char *src,char *dest,int iLength)
{
    while(*src!='\0' && iLength!=0)          
    {
        *dest=*src;
        *dest++;
        *src++;

        iLength--;
    }

    *dest='\0';           
}

int main()
{
    char Arr[20];
    char Brr[20];
    int iNo=0;

    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);

    printf("Enter number of letters that you want to concat:\n");
    scanf("%d",&iNo);

    strncpyX(Arr,Brr,iNo);   

    printf("String after copy is:%s\n",Brr);         

    return 0;
}