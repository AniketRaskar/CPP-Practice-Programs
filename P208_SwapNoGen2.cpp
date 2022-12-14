//code in generic programming using call by reference
#include<iostream>
using namespace std;

template<class T>
void SwapR(T &p,T &q)
{
    T temp;
    temp = p;
    p=q;
    q=temp;
}
int main()
{
    int No1 = 11;int No2 = 21;
    cout<<"Before swap data is:"<<endl<<No1<<"\t"<<No2<<endl;
    SwapR(No1,No2);
    cout<<"After swap data is:"<<endl<<No1<<"\t"<<No2<<endl;

    float fNo1 = 11.0;float fNo2 = 21.0;
    cout<<"Before swap data is:"<<endl<<fNo1<<"\t"<<fNo2<<endl;
    SwapR(fNo1,fNo2);
    cout<<"After swap data is:"<<endl<<fNo1<<"\t"<<fNo2<<endl;

    char cNo1 = 'A';char cNo2 = 'B';
    cout<<"Before swap data is:"<<endl<<cNo1<<"\t"<<cNo2<<endl;
    SwapR(cNo1,cNo2);
    cout<<"After swap data is:"<<endl<<cNo1<<"\t"<<cNo2<<endl;


    return 0;
}