//accept the two string from user and perform the concantination of first after second

#include <iostream>
using namespace std;

void strcatX(char *src,char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }
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

    cout<<"Enter the string"<<endl;
    cin.getline(Brr,20);
    
    strcatX(Arr,Brr);   //Display(100);

    cout<<"String after concantination is :"<<Brr<<endl;

    return 0;
}