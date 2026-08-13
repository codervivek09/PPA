#include <stdio.h>

int main() 
{
    int Arr [] = {11,21,51,101,111};

    int*P = NULL;
    int*Q = NULL;

    P = &(Arr[1]);
    Q = &(Arr[3]);

    printf("%d\n", *Q);     // 101  

    Q = Q-3;

    printf("%d\n", *Q);     // 11

    

    return 0;
}