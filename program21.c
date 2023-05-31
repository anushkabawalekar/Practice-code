//problems on numbers(to display factors of given number)

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<(iNo/2); iCnt++)                 //O(N/2)   (iNo/2)=becoz of this iterates less number means optimize code
    {
        if((iNo%iCnt)==0)
        {
            printf("%d \n",iCnt);

        }    
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}


//time complexity:O(N/2)
//where N is input(Natural numbers)