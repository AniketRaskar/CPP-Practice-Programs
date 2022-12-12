//accept the string from user and copy it into another string. ie. till delimineter
//copying one notebook into another notebook
#include <iostream>
using namespace std;

void strcpyX(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    
}
int main()
{
    char Arr[20];  //Bharleli wahi
    char Brr[20];  //Kori Wahi
   
    cout<<"Enter the string"<<endl;
    cin.getline(Arr,20);
    
    strcpyX(Arr,Brr);   //Display(100);
    cout<<"String after copy is :"<<Brr<<endl;

    return 0;
}