#include<iostream>
using namespace std;

#pragma pack(1)
class Base 
{
    public:
        int i, j;

        void fun()
        {    cout<<"Base Fun\n"; }
        void gun()
        {    cout<<"Base Gun\n"; }
        virtual void sun()
        {    cout<<"Base Sun\n"; }
        virtual void run()
        {    cout<<"Base Run\n"; }
};  // 16 Bytes - i(4) + j(4) + 

#pragma pack(1)
class Derived : public Base 
{
    public:
        int x;

        void fun()
        {    cout<<"Derived Fun\n";  }
        void sun()                          // by default Virtual
        {    cout<<"Derived Sun\n"; }
        virtual void mun()                     // Error
        {    cout<<"Derived Mun\n"; }
        void bun()                              // Error
        {    cout<<"Derived Bun\n";  }


};  // 20 Bytes 


int main ()
{
    Base *BP = new Derived();
    
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    BP->fun();
    BP->gun();
    BP->sun();
    BP->run();
    // BP->mun();
    // BP->bun();

    return 0;
}