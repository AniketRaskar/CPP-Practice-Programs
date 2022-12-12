//accept string from user and count number of capital character from it
#include <iostream>
using namespace std;

int CountCapital(char str[])
{
    int iCnt =0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;
    cout<<"Enter the string"<<endl;
    cin.getline(Arr,20);
    
    iRet=CountCapital(Arr);   //Display(100);
    cout<<"String contains Number of capital letters in it:"<<iRet<<endl;

    return 0;
}