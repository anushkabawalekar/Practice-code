//problems on digits
//take number from user and display its individual digits 
//using for loop

#include<stdio.h>

void DisplayDigits(int iNo)           //call by value
{
    int iDigit=0;

    for( ; iNo!=0; )
    {
        iDigit=iNo%10;                          //10 becoz the taken number is in the form of decimal
        printf("%d\t",iDigit);
        iNo=iNo/10;                             //self updating 
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