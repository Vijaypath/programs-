#include<iostream>
using namespace std;
int main()
{
   long int y;
    cin>>y;
    if((y%400==0 || y%4==0)&&y%100!=0)
    {
        
        cout<<"12"<<"."<<"09"<<"."<<y;
    }
}
