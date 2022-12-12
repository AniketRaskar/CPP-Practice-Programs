//OOP cpp code with maximum 
#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int Size;
 
    ArrayX(int value);
    ~ArrayX();
    void Accept();

    void Display();
    
    int Maximun();
};
ArrayX::ArrayX(int value)
{
    Size=value;
    Arr = new int[Size];
}

ArrayX::~ArrayX()
{
    delete []Arr;
}

void ArrayX::Accept()
{
    cout<<"Enter the value:"<<endl;
    for(int i=0;i<Size;i++)
    {
        cin>>Arr[i];
    }
}

void ArrayX:: Display()
{
    cout<<"Values are:"<<endl;
    for(int i=0;i<Size;i++)
    {
        cout<<Arr[i]<<endl;
    }
}

int ArrayX:: Maximun()
    {
        int max=Arr[0];
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
    ArrayX obj1(5);
    obj1.Accept();
    obj1.Display();

    int ret=0;
    ret=obj1.Maximun();
    cout<<"Maximun entered element is:"<<ret<<endl;


    return 0;
}