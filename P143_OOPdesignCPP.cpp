#include <iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;
    
    public:
        ArrayX(int iValue)  //Parametrised cons
        {
            this->iSize = iValue;
            Arr = new int[iSize];  //Allocate the Resource
        }

        ~ArrayX()  //Destructor
        {
            delete []Arr;  //Deallocate the resourse
        }

        void Accept()
        {
            int iCnt=0;
            cout<<"Enter the elements"<<endl;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }

        }
        void Display()
        {
            int iCnt=0;
            cout<<"Elements of array are"<<endl;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        int Summation()
        {
            int iCnt=0,iSum=0;

            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                 iSum += Arr[iCnt];
            }
            return iSum;
        }
};
int main()
{
   int iRet =0, iNo=0;
    cout<<"Enter the number of elements: \n";
    cin>>iNo;
   ArrayX obj1(iNo);
   obj1.Accept();
   obj1.Display();

   iRet =obj1.Summation();

   cout<<"Addition is:"<<iRet<<endl;

    return 0;
}