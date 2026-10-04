#include<iostream>
using namespace std;

int main ()
{
    int No1=0,No2=0;

    cout<<"Enter First No. ";
    cin>>No1;

    cout<<"Enter Second No. ";
    cin>>No2;

    if(No1>No2){
        cout<<"Maximum No is: "<<No1;
    } 
    else 
    {
        cout<<"Maximum No is: "<<No2;
    }

    return 0;
}