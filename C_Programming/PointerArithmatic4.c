#include <stdio.h>

int main() 
{
    int Arr [] = {11,21,51,101,111};

    int*P = NULL;
    int*Q = NULL;

    P = &(Arr[1]);
    Q = &(Arr[3]);

    printf("%d\n", *P);     // 21

    P = P+3;

    printf("%d\n", *P);     // 111

    

    return 0;
}