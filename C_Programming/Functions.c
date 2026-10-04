#include <stdio.h>

int addition(int value1, int value2){
    int result = 0;
    result = value1 + value2;
    return result;
}

int main()
{
    int No1=0, No2=0, Ans=0;

    printf("Enter First No. : \n");
    scanf("%d", &No1);

    printf("Enter Second No. : \n");
    scanf("%d", &No2);

    Ans = addition(No1, No2);

    printf("Additio : %d", Ans);

    return 0;
}