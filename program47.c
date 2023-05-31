//problems on digits
//take number from user 
// count of even digits in it

#include<stdio.h>
#include<stdbool.h>

int CountEvenDigit(int iNo)           
{
    int iDigit=0;
    int iCnt=0;

    if(iNo<0)                                         //updater
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;                          
        
        if(iDigit%2==0)
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
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue1);

    iRet=CountEvenDigit(iValue1);

    printf("Frquency of even digits in %d : %d times\n",iValue1,iRet);

    return 0;
}