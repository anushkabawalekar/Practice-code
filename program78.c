//problems on n numbers
//accept n numbers from user and one another number and check that number is there present or not 
//and return index of last occurrence of that number
//optomized code

#include<stdio.h>    
#include<stdlib.h> 

#define ERR_NOTFOUND -1   //user defined macro

int SearchLastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt=0;

    for(iCnt=iLength-1; iCnt>=0; iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
            break;   
        }
    }
    return iCnt;
}


int main()
{
    int iSize=0,iCnt=0,iRet=0,iValue=0;
    int *ptr=NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);
     
    ptr= (int*)malloc(iSize * sizeof(int));

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements %d: ",iCnt);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter element:\n");
    scanf("%d",&iValue);

    printf("Elements of array are:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet=SearchLastOcc(ptr,iSize,iValue);

    if(iRet==ERR_NOTFOUND)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("%d occurred at index %d\n",iValue,iRet);
    }

    free(ptr);

    return 0;
}


//best case time complexity=worst case=average case= n