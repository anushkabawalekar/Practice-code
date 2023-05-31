//problems on n numbers
//accept n numbers from user and count all even numbers

#include<stdio.h>    //IO
#include<stdlib.h>  //memory management

int CountEven(int Arr[],int iLength)
{
    int iCnt=0;
    int iCounter=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
           iCounter++;
        }
    }   
    return iCounter;
}

int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    /*printf("Elements of array are:\n");
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }*/

    iRet=CountEven(ptr,iSize);

    printf("Even Elements are:%d\n",iRet);

    free(ptr);

    return 0;
}