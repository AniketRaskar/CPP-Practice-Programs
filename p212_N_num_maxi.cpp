//accept N numbers and find the maximun no of then

#include<iostream>
using namespace std;

int Maximun(int Arr[],int size)
{
    int max=Arr[0];
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

    return 0;
}
