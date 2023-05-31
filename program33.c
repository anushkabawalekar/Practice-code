//problems on numbers
// take one input from user
// calculate factorial of that number using while loop

#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    int iCnt=0;
    ULONG iFact=1;

    if(iNo<0)                            //updater
    {
        iNo=-iNo;
    }

    iCnt=1;
    while(iCnt<=iNo)
    {
        iFact=iFact*iCnt;
        iCnt++;
    }

    return iFact;
}

int main()
{
    int iValue=0;
    ULONG iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

   iRet=Factorial(iValue);

    printf("Factorial is:%d\n",iRet);

    return 0;
}
