//problems on digits
//program to count digits of given number
//count the digits

#include<stdio.h>

int DisplayDigits(int iNo)
{
    int iDigit=0;
    int iCnt=0;

    while(iNo!=0)
    {
        iCnt++;
        iNo=iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=DisplayDigits(iValue);
    printf("Number of digits are:%d\n",iRet);

    return 0;
}