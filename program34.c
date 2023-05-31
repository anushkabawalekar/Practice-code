//problems on numbers
//take 2 inputs from user i.e. x and y
//perform x raise to y i.e 2 raise to 4
//using while loop

#include<stdio.h>

typedef unsigned long int ULONG;

ULONG CalucaltePower(int iBase,int iPower)               //becoz of unsigned the capacity will be double
{
    ULONG iResult=1;                    //by deafult signed

    if(iBase<0 || iPower<0)                 //filter for negative numbers
    {
        return 0;
    }

    int iCnt=1;
    while(iCnt<=iPower)
    {
        iResult=iResult*iBase;
        iCnt++;
    }
    
    return iResult;
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    ULONG iRet=0;

    printf("Enter base:\n");
    scanf("%d",&iValue1);

    printf("Enter power:\n");
    scanf("%d",&iValue2);

    iRet=CalucaltePower(iValue1,iValue2);

    printf("Power is:%d\n",iRet);

    return 0;
}
