#include <iostream>
using namespace std;

int main()
{
    char Arr[] = "Hello";
    int i =0;

    while(Arr[i] != '\0')
    {
        cout<<Arr[i]<<"\n";
        i++;
    }
    
    return 0;
}