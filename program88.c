//problems on pattern printing

// input=7
// output= A B C D E F G 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    char ch='A';

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
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