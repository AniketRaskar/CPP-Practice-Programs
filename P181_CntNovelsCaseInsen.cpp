//accept string from user and count number of  novels from it in case insensitive
#include <iostream>
using namespace std;

int CountSmall(char str[])
{
    int iCnt =0;
    while(*str != '\0')
    {
        if((*str == 'A') || (*str =='E') || (*str =='I') || (*str == 'O') || (*str =='U') ||(*str == 'a') || (*str =='e') || (*str =='i') || (*str == 'o') || (*str =='u'))
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
    cout<<"String contains Number of vovels are :"<<iRet<<endl;

    return 0;
}