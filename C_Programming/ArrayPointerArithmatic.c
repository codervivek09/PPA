#include <stdio.h>

int main () 
{
    int Arr [] = {10,20,30,40};
    int*P = &(Arr[1]);
    int*Q = &(Arr[3]);

    printf("%d\n", P);
    printf("%d\n", Q);

    printf("%d\n", P+2);
    printf("%d\n", Q-2);
    printf("%d\n", Q-P);

    return 0;
}