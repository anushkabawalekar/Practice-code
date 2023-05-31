//converting for loop into while loop

#include<stdio.h>

void DisplayF(int iNo)
{
    int iCnt=0;

    /*for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }*/

    iCnt=iNo;
    while(iCnt>=1)                  //backward loop
    {
        printf("%d\t",iCnt);
        iCnt--;
    }

   /* iCnt=1;
    while(iCnt<=iNo)                  //forward loop
    {
        printf("%d\t",iCnt);
        iCnt--;
    }*/
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

   DisplayF(iValue);

    return 0;
}