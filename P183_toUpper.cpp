//accept string from user and convert it into lowercase to upper
#include<iostream>
using namespace std;

void struprX(char str[])
{
    
    while(*str != '\0')
    {
       if((*str >='a') && (*str<='z'))
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
    
    struprX(Arr);   //Display(100);
    cout<<"SString in upper case :"<<Arr<<endl;

    return 0;
}