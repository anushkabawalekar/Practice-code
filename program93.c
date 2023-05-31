//problems on pattern printing

// input=5
// output= 1 2 3 4 5 4 3 2 1 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<iNo; iCnt++)  ///for(iCnt=1; iCnt<iNo; iCnt++) can work this also
    {
        printf("%d\t",iCnt);   
    }
    
    for(iCnt=iNo-1; iCnt>=1; iCnt--)
    {
        printf("%d\t",iCnt);
    }    
    printf("\n");
}

int main()
{
    int iFrequency=0;

    printf("Enter Frequency of symbol:\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}