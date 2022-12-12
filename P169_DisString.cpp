#include <iostream>
using namespace std;

void Display(char str[])
{
    while(*str != '\0')
    {
        cout<<*str<<endl;
        str++;
    }

}
int main()
{
    char Arr[20];
    cout<<"Enter the string"<<endl;
    cin>>Arr;  //if we giving the hello world then it takes only hello
    
    Display(Arr);   //Display(100);
    return 0;
}