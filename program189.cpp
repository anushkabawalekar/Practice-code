//problems on digits
//accept number from user and perform addition of even digit

#include<iostream>
using namespace std;

class Digit
{
    public:
        int iNo;

        Digit(int X)
        {
            iNo=X;
        }

        int SumDigits()
        {
            int iDigit=0;
            int iSum=0;
            int iTemp=iNo;

            while(iTemp!=0)
            {
                iDigit=iTemp%10;
                if(iDigit%2==0)
                {
                    iSum=iSum+iDigit;
                }    
                iTemp=iTemp/10;
            }
            return iSum;
        }
};

int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"Enter number:"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet=dobj.SumDigits();

    cout<<"Summation:"<<iRet<<"\n";

    return 0;
}