#include "Program5header.h"

/////////////////////////////////////////////////////////////////////////////
// Entry point Function
/////////////////////////////////////////////////////////////////////////////

int main()
{
    auto unsigned int ino1=0,ino2=0,ians=0;

    printf("Enter First number:");
    scanf("%d",&ino1);

    printf("Enter Second number:");
    scanf("%d",&ino2);

    ians=Addition(ino1,ino2);

    printf("Addition is:%d \n",ians);

    return 0;
}

