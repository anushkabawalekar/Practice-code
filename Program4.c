// WAP which performs addition of 2 numbers

/*
    Alogorithm:

    START
        Accept first number as no1
        Accept second number as no2
        create one variable as ans
        perform addition of no1 and no2
        store the addition into variable ans
        display the value of ans
    STOP
*/

//////////////////////////////////////////////////////////////////////////////
//Problem Statement:WAP which performs addition of 2 numbers
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
// Function name : Addition
// Input         : Unsigned integer,unsinged integer
// Output        : Unsigned integer
// Description   : Performs addition of 2 numbers
// Author        : Anushka Bawalekar
// Date          : 18/04/2023
//////////////////////////////////////////////////////////////////////////////

unsigned int Addition (unsigned int iValue1, unsigned int iValue2)
{
    unsigned int iResult=0;
    iResult = iValue1+iValue2;
    return iResult;
}

/////////////////////////////////////////////////////////////////////////////
// Entry point Function
/////////////////////////////////////////////////////////////////////////////

int main()
{
    auto unsigned int ino1=0,ino2=0,ians=0;

    printf("Enter First number:");
    scanf("%d",&ino1);

    printf("Enter Second number:");
    scanf("%d",&ino2);

    ians=Addition(ino1,ino2);

    printf("Addition is:%d \n",ians);

    return 0;
}

