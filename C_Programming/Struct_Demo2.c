#include<stdio.h>

// Declaration of a Structure
struct Demo 
{
    int i;
    char ch;
    float f;

};

int main ()
{
    printf("%d\n", sizeof(struct Demo));

    return 0;
}