// wap that ask a number and test whether the number is exactly divisible by 5 but not by 11

#include <stdio.h>

int main()
{
    int a;
    printf("enter any number:");
    scanf("%d", &a);

    if (a % 5 == 0)
        printf("it is divisible by 5");
    if (a % 11 != 0)
    {
        printf("\n it is not divisible by 11");
    }

    return 0;
}