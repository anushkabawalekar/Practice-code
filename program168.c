// problems on string
//take String from user and concat that string with another string and just concat number of letters specified by user

#include<stdio.h>

void strncatX(char *src,char *dest,int iLength)
{
    while(*dest!='\0')            
    {
        *dest++;
    }
    
    *dest=' ';             
    *dest++;

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
    char Brr[20]="Demo";
    int iNo=0;

    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);

    printf("Enter number of letetrs that you want to concat:\n");
    scanf("%d",&iNo);

    strncatX(Arr,Brr,iNo);   

    printf("String after concatenation is:%s\n",Brr);         

    return 0;
}