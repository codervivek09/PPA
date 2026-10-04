#include<stdio.h>

void Addition(int No1, int No2)
{
    int result = 0;
    result = No1 + No2;
    printf("Addition is : %d\n", result);
}

int main ()
{
    int Value1 = 0, Value2 = 0;

    printf("Enter First No. : ");
    scanf("%d", &Value1);

    printf("Enter Second No. : ");
    scanf("%d", &Value2);

    Addition(Value1, Value2);               // Function Call

    return 0;
}