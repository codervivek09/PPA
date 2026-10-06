#include<iostream>
using namespace std;

class Base 
{
    public :
        int i, j;

        int Addition(int no1, int no2){
            return no1 + no2;
        }

        virtual int Subtraction(int no1, int no2) = 0;

};

class Derived : public Base
{

    public :
        int x;

        int Subtraction(int no1, int no2){
            return no1-no2;
        }
        int Multiplication(int no1, int no2){
            return no1 * no2;
        }
};


int main ()
{
    Derived Dobj;

    int Ret = 0;

    

    return 0;
}