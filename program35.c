//problems on digits
//program to split in digits of given number

#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        printf("%d\t",iDigit);

        iNo=iNo/10;
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}