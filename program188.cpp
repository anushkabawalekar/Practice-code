//problems on n numbers
// take n numbers from user and perform addition

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iNo)
        {
            iSize=iNo;
            Arr=new int [iSize];
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter elements:"<<"\n";

            int iCnt=0;

            for(iCnt=0; iCnt<iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of array are:"<<"\n";
            
            int iCnt=0;

            for(iCnt=0; iCnt<iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        int Summation()
        {
            int iSum=0;
            int iCnt=0;

            for(iCnt=0; iCnt<=iSize; iCnt++)
            {
                iSum=iSum+Arr[iCnt];
            }
            return iSum;
        }

};

int main()
{
    int iNo=0;
    int iRet=0;

    cout<<"Enter number of elements:"<<"\n";
    cin>>iNo;

    Array aobj(iNo);

    aobj.Accept();
    aobj.Display();

    iRet=aobj.Summation();

    cout<<"Summation:"<<iRet<<"\n";

    return 0;
}