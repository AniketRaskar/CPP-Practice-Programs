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
    cin.getline(Arr,20);  //for accepting more than one words in cpp getline is used
    
    Display(Arr);   //Display(100);
    return 0;
}