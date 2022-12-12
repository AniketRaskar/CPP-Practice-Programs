//accept N numbers of generic type and find the maximun no of them

#include<iostream>
using namespace std;

template<class T>
T Maximun(T Arr[],int size)
{
    T max=Arr[0];
    for(int i=1;i<size;i++)
    {
        if(Arr[i]>max)
        {
            max=Arr[i];
        }
    }
    return max;

}
int main()
{
    int Brr[] ={10,20,40,15,5};
    int ret=0;

    ret =Maximun(Brr,5);
    cout<<"Maximun no is:"<<ret<<endl;

    float Crr[] ={10.12,20.32,40.54,15.1,5.43};
    float fret=0.0;

    fret =Maximun(Crr,5);
    cout<<"Maximun no is:"<<fret<<endl;

    return 0;
}
