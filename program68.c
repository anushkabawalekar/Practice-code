//problems on n numbers
//accept n numbers from user 

#include<stdio.h>    
#include<stdlib.h> 

void Fun(int Arr[],int iLength)
{
    //logic
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

    Fun(ptr,iSize);

    free(ptr);

    return 0;
}