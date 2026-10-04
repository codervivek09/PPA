#include <stdio.h>

int main() 
{
    int Arr [] = {11,21,51,101,111};

    int*P = NULL;
    int*Q = NULL;

    P = &(Arr[1]);
    Q = &(Arr[3]);

    printf("%d\n", (Q-P));

    return 0;
}