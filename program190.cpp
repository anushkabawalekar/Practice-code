//problems on digits
//accept number from user and perform addition of even digit
//updation

#include<iostream>
using namespace std;

class Digit
{
    private:
        int iNo;

    public:
        Digit(int X)
        {
            iNo=X;
        }

        int SumDigits()
        {
            int iDigit=0;
            int iSum=0;

            while(iNo!=0)
            {
                iDigit=iNo%10;
                if(iDigit%2==0)
                {
                    iSum=iSum+iDigit;
                }    
                iNo=iNo/10;
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