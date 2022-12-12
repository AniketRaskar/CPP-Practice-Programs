//accept string from user and reverse the string in place

#include<iostream>
using namespace std;

void strrevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char Arr[20];
   
    cout<<"Enter the string"<<endl;
    cin.getline(Arr,20);
    
    strrevX(Arr);   //Display(100);
    cout<<"String after reverse is :"<<Arr<<endl;

    return 0;
}