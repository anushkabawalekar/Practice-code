//problems on numbers(program for check whether given number is prime number or not)
//(prime number means divisible by 1 and its own number)
//with flag concept

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt=0;
    bool bFlag=true;                                 

    for(iCnt=2; iCnt<=(iNo/2); iCnt++)                 //O(n/2) if number is prime number
    {
        if(iNo%iCnt==0)                              // indicates that factor has got
        {
            bFlag=false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);

    if(bRet==true)
    {
        printf("%d is a Prime Number",iValue);
    }
    else
    {
        printf("%d is not a Prime Number",iValue);
    }

    return 0;
}