//problems on n numbers
//accept n numbers from user and return minimum and maximum numbers from it

#include<stdio.h>    
#include<stdlib.h> 

void MaximumMinimum(int Arr[],int iLength)
{
    int iCnt=0;
    int iMin=Arr[0];
    int iMax=Arr[0];

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    printf("Largest element is:%d\n",iMax);
    printf("Smallest element is:%d\n",iMin);
}

int main()
{
    int iSize=0,iCnt=0;
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

    MaximumMinimum(ptr,iSize);

    free(ptr);

    return 0;
}