#include<iostream>

using namespace std;

class PPA 
{
    public:
        int No1;
        int No2;

        void display()
        {
            cout<<"Inside Display\n";
        }

};


int main()
{
    PPA Pobj;

    cout<<sizeof(Pobj)<<"\n";

    return 0;
}