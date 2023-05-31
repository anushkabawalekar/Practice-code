//problems on digits
//take number from user and check whether it contains 8 or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDigits(int iNo)           
{
    int iDigit=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;                          
        
        if(iDigit==8)
        {
            //return true;
            break;
        }
        iNo=iNo/10;                             
    }
    if(iDigit==8)
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

    bRet=CheckDigits(iValue);
    if(bRet==true)
    {
        printf("Digit 8 is presnt in number\n");
    }
    else
    {
        printf("Digit 8 is not presnt in number\n");
    }

    return 0;
}