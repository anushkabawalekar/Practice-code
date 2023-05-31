// problems on string
//take String from user and searching character from user and display small letter and capital letter count

#include<stdio.h>

void Frequency(char *str)
{
    int iCntSmall=0;
    int iCntCapital=0;

    while(*str!='\0')
    {
        if((*str>='a') || (*str>='z'))
        {
            iCntSmall++;
        }

        else if((*str>='A') || (*str>='Z'))
        {
            iCntCapital++;
        }
        str++;
    }

    printf("Small Letter occurrence are:%d\n",iCntSmall);
    printf("Capital Letter occurrence are:%d\n",iCntCapital);
}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);

    Frequency(Arr);            

    return 0;
}