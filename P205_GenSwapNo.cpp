#include<iostream>
using namespace std;

void SwapA(int *p,int *q)
{
    int temp;
    temp = *p;
    *p=*q;
    *q=temp;
}
int main()
{
    int No1 = 11;int No2 = 21;
    cout<<"Before swap data is:"<<endl<<No1<<"\t"<<No2<<endl;

    SwapA(&No1,&No2);

    cout<<"After swap data is:"<<endl<<No1<<"\t"<<No2<<endl;

    return 0;
}