#include<iostream>

using namespace std;

class PPA 
{
    public:
        int No1;
        int No2;

        // Default Constructor
        PPA()
        {
            cout<<"Inside Default Constructor\n";
        }

        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }

        // Parameterised Constructor
        PPA(int a, int b)
        {
            cout<<"Inside Parameterised Constructor\n";
        }

};


int main()
{
    PPA Pobj1;
    PPA Pobj2(11,21);
  
    return 0;
}                   