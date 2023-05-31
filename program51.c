//problems on digits
//take input from user and reverse that number
//check whther it is palindrome or not 
//means is reverse number and original number is same or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit=0;
    int iReverse=0;
    int iTemp=iNo;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        iReverse=(iReverse*10)+iDigit;           //main logic differs here

        iNo=iNo/10;
    }
    if(iReverse==iTemp)
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
    int iValue1=0;
    bool bRet=false;

    printf("Enter number:\n");
    scanf("%d",&iValue1);

    bRet=CheckPalindrome(iValue1);

    if(bRet==true)
    {
        printf("%d is Palindrome number\n",iValue1);
    }
    else
    {
         printf("%d is not Palindrome number\n",iValue1);
    }
    return 0;
}