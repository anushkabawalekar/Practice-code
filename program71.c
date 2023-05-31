//problems on n numbers
//accept n numbers from user and return minimum and maximum numbers from it

#include<stdio.h>    
#include<stdlib.h> 

int Minimum(int Arr[],int iLength)
{
    int iCnt=0;
    int iMin=Arr[0];

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
}

int Maximum(int Arr[],int iLength)
{
    int iCnt=0;
    int iMax=Arr[0];

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *ptr=NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);
     
    ptr= (int*)malloc(iSize * sizeof(int));

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements %d: ",iCnt);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet=Maximum(ptr,iSize);

    printf("Largest Number is:%d\n",iRet);

    iRet=Minimum(ptr,iSize);

    printf("Smallest Number is:%d\n",iRet);

    free(ptr);

    return 0;
}