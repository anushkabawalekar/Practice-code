//problems on digitd
//take input from user and reverse that number
//without updater also works for -ve numbers

#include<stdio.h>
int ReverseNumber(int iNo)
{
    int iDigit=0;
    int iReverse=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        iReverse=(iReverse*10)+iDigit;           //main logic differs here

        iNo=iNo/10;
    }
}

int main()
{
    int iValue1=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue1);

    iRet=ReverseNumber(iValue1);

    printf("Reverse number of %d is %d\n",iValue1,iRet);

    return 0;
}