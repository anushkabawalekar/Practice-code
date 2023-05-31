// WAP which checks whether number is even or odd.

#include<stdio.h>          ///for printf and scnaf
#include<stdbool.h>        //for bool datatype

/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name : CheckEvenOdd
// Input : Integer
// Output : Boolean
// Description : Checks whether inpiut is even or odd
// Author : Anushka Bawalekar
// Date : 25/04/2023
// Update : 26/04/2023
/////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Please enter number to check whether it is even or odd:\n");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if(bRet==true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }

    return 0;
}