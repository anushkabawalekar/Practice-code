//problems on digits
//take number from user and check whether it contains digit 
//take one more digit from user and check that digit is presnt in number or not
//count frequency of that digit in that number

#include<stdio.h>
#include<stdbool.h>

int CheckDigitFrequency(int iNo,int iSearch)           
{
    int iDigit=0;
    int iCnt=0;

    if(iSearch<0 || iSearch>9)                      //filter
    {
        printf("Enter the digit in 0 to 9 \n");
        return 0;
    }

    if(iNo<0)                                         //updater
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;                          
        
        if(iDigit==iSearch)
        {
            iCnt++;
        }
        iNo=iNo/10;                             
    }
    return iCnt;
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue1);

     printf("Enter Digit(0 to 9):\n");
    scanf("%d",&iValue2);

    iRet=CheckDigitFrequency(iValue1,iValue2);

    printf("Frquency of %d is in %d : %d times\n",iValue2,iValue1,iRet);

    return 0;
}