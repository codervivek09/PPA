#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float no = 89.4f;
    double d = 85.3759837;

    printf("%d\n", sizeof(ch));
    printf("%d\n", sizeof(i));
    printf("%d\n", sizeof(no));
    printf("%d\n", sizeof(d));

    return 0;
}