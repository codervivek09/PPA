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

        // Destructor
        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }

        // Parameterised Constructor
        PPA(int a, int b)
        {
            cout<<"Inside Parameterised Constructor\n";
        }

        // Copy Constructor
        PPA(PPA &obj)
        {
            cout<<"Inside Copy Constructor\n";
        }

};


int main()
{
    PPA Pobj1;              // Default
    PPA Pobj2(11,21);       // Parameterised
    PPA Pobj3(Pobj1);       // Copy
  
    return 0;
}                   