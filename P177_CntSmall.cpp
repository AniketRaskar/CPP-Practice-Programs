//accept string from user and count number of sampp character from it without asci value
#include <iostream>
using namespace std;

int CountSmall(char str[])
{
    int iCnt =0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <='z' ))
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
    
    iRet=CountSmall(Arr);   //Display(100);
    cout<<"String contains Number of small letters in it:"<<iRet<<endl;

    return 0;
}