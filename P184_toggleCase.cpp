//accept string from user and toggle the case of that string
#include<iostream>
using namespace std;

void strtoggleX(char str[])
{
    
    while(*str != '\0')
    {
       if((*str >='A') && (*str <='Z'))
        {
            *str = *str +32;
        }
        else if((*str >= 'a') && (*str >= 'z'))
        {
            *str = *str -32;
        }
        str++;
    }
}
int main()
{
    char Arr[20];
   
    cout<<"Enter the string"<<endl;
    cin.getline(Arr,20);
    
    strtoggleX(Arr);   //Display(100);
    cout<<"String after toggle is :"<<Arr<<endl;

    return 0;
}