//code in generic programming by call by address
#include<iostream>
using namespace std;

template<class T>
void SwapA(T *p,T *q)
{
    T temp;
    temp = *p;
    *p= *q;
    *q=temp;
}
int main()
{
    int No1 = 11;int No2 = 21;
    cout<<"Before swap data is:"<<endl<<No1<<"\t"<<No2<<endl;
    SwapA(&No1,&No2);
    cout<<"After swap data is:"<<endl<<No1<<"\t"<<No2<<endl;

    float fNo1 = 11.5;float fNo2 = 21.8;
    cout<<"Before swap data is:"<<endl<<fNo1<<"\t"<<fNo2<<endl;
    SwapA(&fNo1,&fNo2);
    cout<<"After swap data is:"<<endl<<fNo1<<"\t"<<fNo2<<endl;

    char cNo1 = 'A';char cNo2 = 'B';
    cout<<"Before swap data is:"<<endl<<cNo1<<"\t"<<cNo2<<endl;
    SwapA(&cNo1,&cNo2);
    cout<<"After swap data is:"<<endl<<cNo1<<"\t"<<cNo2<<endl;


    return 0;
}