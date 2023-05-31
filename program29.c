//problems on numbers
// take one input from user
// calculate factorial of that number

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

    for(iCnt=1; iCnt<=iNo; iCnt++)                            // forward loop
    {
        iFact=iFact*iCnt;
    }

   /* for(iCnt=iNo; iCnt>=1; iCnt--)                            // backward loop
    {
        iFact=iFact*iCnt;
    }*/

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
