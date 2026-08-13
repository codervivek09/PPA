#include<stdio.h>

// Declaration of a Structure
struct Demo 
{
    int i;
    float f;
    double d;

};

int main ()
{
    printf("%d\n", sizeof(struct Demo));

    return 0;
}