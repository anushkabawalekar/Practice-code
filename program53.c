//problems on digit
//take input from user and return smallest digit from it

#include<stdio.h>

int MinimumDigit(int iNo)
{
    int iDigit=0;
    int iMin=9;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;   

        if(iDigit<iMin)
        {
            iMin=iDigit;
        }
    }
    
    return iMin;
}

int main()
{
    int iValue=0;
    int iRet=0.0f;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=MinimumDigit(iValue);

    printf("Smallest digits from %d is %d \n",iValue,iRet);

    return 0;
}