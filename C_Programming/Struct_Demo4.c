#include<stdio.h>

#pragma pack (1)

// Declaration of a Structure
struct Demo 
{
    int i;
    char ch;
    float f;

};

int main ()
{
    struct Demo dobj1;
    struct Demo dobj2;

    struct Demo*DP = NULL;

    DP= &dobj2;

    // Direct Accessing Operator
    dobj1.i = 11;
    dobj1.ch ='A';
    dobj1.f= 90.99f;

    // Indirect Accessing Operator
    DP ->i = 21;
    DP ->ch = 'B';
    DP ->f = 91.99f;

    printf("%d\n", dobj1.i);
    printf("%d\n", DP->i);

    return 0;
}