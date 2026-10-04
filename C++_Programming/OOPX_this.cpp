#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int No1;
        int No2;

        Arithmatic()
        {
            this->No1 = 0;
            this->No2 = 0;
        }
        
        Arithmatic(int i, int j)
        {
            this->No1 = i;
            this->No2 = j;
        }

        // int Addition(Arithmatic *this)
        int Addition()
        {
            int Ans = 0;
            Ans = this->No1 + this->No2;
            return Ans;
        }
};

int main ()
{
    Arithmatic Aobj1(10,11);
    int Result = 0;

    // Result = Addition(&Aobj1);
    Result = Aobj1.Addition();

    cout<<"Addition is : "<<Result<<"\n";
    
    return 0;
}