//problems on n numbers
//accept n numbers from user and one another number and check that number is there present or not
//with flag

#include<stdio.h>    
#include<stdlib.h> 
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    bool bFlag=false;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            bFlag=true;
            break;
        }
    }

    return bFlag;

}

int main()
{
    int iSize=0,iCnt=0,iValue=0;
    int *ptr=NULL;
    bool bRet=false;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr= (int*)malloc(iSize * sizeof(int));

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements %d: ",iCnt);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter element that you want to search:\n");
    scanf("%d",&iValue);
     

    printf("Elements of array are:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    bRet=Search(ptr,iSize,iValue);

    if(bRet==true)
    {
        printf("%d is present in array\n",iValue);
    }
    else
    {
        printf("%d is not present in array\n",iValue);
    }

    free(ptr);

    return 0;
}