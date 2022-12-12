//OOP cpp code with maximum for genering 
#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
    T *Arr;
    int Size;
 
    ArrayX(int value);
    ~ArrayX();
    void Accept();

    void Display();
    
    T Maximun();
};
template<class T>
ArrayX<T>::ArrayX(int value)
{
    Size=value;
    Arr = new T[Size];
}
template<class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}
template<class T>
void ArrayX<T>::Accept()
{
    cout<<"Enter the value:"<<endl;
    for(int i=0;i<Size;i++)
    {
        cin>>Arr[i];
    }
}
template<class T>
void ArrayX<T>::Display()
{
    cout<<"Values are:"<<endl;
    for(int i=0;i<Size;i++)
    {
        cout<<Arr[i]<<endl;
    }
}
template<class T>
T ArrayX<T>::Maximun()
    {
        T max=Arr[0];
        for(int i=1;i<Size;i++)
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
    ArrayX <int>obj1(5);
    obj1.Accept();
    obj1.Display();
    int ret=0;
    ret=obj1.Maximun();
    cout<<"Maximun entered element is:"<<ret<<endl;

    ArrayX <float>obj2(5);
    obj2.Accept();
    obj2.Display();
    float fret=0;
    fret=obj2.Maximun();
    cout<<"Maximun entered element is:"<<fret<<endl;


    return 0;
}