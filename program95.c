//problems on pattern printing

// input=5
// output= -5 -4 -3 -2 -1 0 1 2 3 4 5

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=-iNo; iCnt<0; iCnt++)
    {
        printf("%d\t",iCnt);   
    }
    
    for(iCnt=0; iCnt<=iNo; iCnt++)
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