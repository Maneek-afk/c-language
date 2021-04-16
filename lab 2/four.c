#include <stdio.h>
int main()
{
    float a; 
    float b;
    float c;
    printf("Enter three different numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= b && a <= c)
        printf("%f is the smallest number.", a);

    if (b <= a && b <= c)
        printf("%f is the smallest number.", b);

    if (c <= a && c <= b)
        printf("%f is the smallest number.", c);

    return 0
    ;
}