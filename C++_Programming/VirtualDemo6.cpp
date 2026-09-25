#include<iostream>
using namespace std;

#pragma pack(1)
class Base 
{
    public:
        int i, j;

        void fun()                          // 1000
        {    cout<<"Base Fun\n"; }
        void gun()                          // 2000
        {    cout<<"Base Gun\n"; }
        virtual void sun()                  // 3000
        {    cout<<"Base Sun\n"; }
        virtual void run()                  // 4000
        {    cout<<"Base Run\n"; }
};  // 16 Bytes - i(4) + j(4) + 

#pragma pack(1)
class Derived : public Base 
{
    public:
        int x;

        void fun()                          // 5000
        {    cout<<"Derived Fun\n";  }
        void sun()                          // 6000
        {    cout<<"Derived Sun\n"; }
        virtual void mun()                  // 7000     
        {    cout<<"Derived Mun\n"; }
        void bun()                          // 8000
        {    cout<<"Derived Bun\n";  }


};  // 20 Bytes 


int main ()
{
    Base *BP = new Derived();
    

    BP->fun();
    BP->gun();
    BP->sun();
    BP->run();
    // BP->mun();           // Error
    // BP->bun();           // Error

    return 0;
}