//accept the two string from user and perform the concantination of second after first

#include <iostream>
using namespace std;

void strcatX(char *src,char *dest)
{
    while(*src != '\0')
    {
        src++;
    }
    while(*dest != '\0')
    {
        *src = *dest;
        dest++;
        src++;
    }
    *src = '\0';
    
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

    cout<<"String after concantination is :"<<Arr<<endl;

    return 0;
}