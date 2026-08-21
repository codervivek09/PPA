#include<iostream>

using namespace std;

class PPA 
{
    public:
        int No1;
        int No2;

        void Display()
        {
            cout<<"Inside Display\n";
        }

};


int main()
{
    PPA Pobj;
    
    Pobj.No1 = 11;
    Pobj.No2 = 21;

    Pobj.Display();

    cout<<Pobj.No1<<"\n";
    cout<<Pobj.No2<<"\n";


    return 0;
}