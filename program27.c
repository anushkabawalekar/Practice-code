//problems on numbers(program for check whether given number is prime number or not)
//(prime number means divisible by 1 and its own number)
//without flag concept

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt=0;

    for(iCnt=2; iCnt<=(iNo/2); iCnt++)               // 1 is always factor of each number
    {
        if(iNo%iCnt==0)
        {
            break;
        }
    }
    if(iCnt==(iNo/2)+1)                       
    {
        return true;
    }
    else
    {
        return false;
    }
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


//time complexity:
//O(n/2) if number is prime number and if not prime number then O(x) where x can be 1,2,3,4....