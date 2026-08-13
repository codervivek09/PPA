#include<stdio.h>

// We can add this nums in "Pragma Pack" -> 1 2 4 8 16
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
    printf("%d\n", sizeof(struct Demo));

    return 0;
}