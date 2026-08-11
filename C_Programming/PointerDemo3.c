#include <stdio.h>

int main() 
{
    char ch = 'A';
    int no = 11;
    float marks = 90.78f;
    double d = 90.56789;

    char*CP = &ch;
    int*IP = &no;
    float*FP = &marks;
    double*DP = &d;

    printf("%d\n", sizeof(CP));         // 8
    printf("%d\n", sizeof(*CP));        // 1
    printf("%d\n", sizeof(ch));         // 1

    return 0;
}