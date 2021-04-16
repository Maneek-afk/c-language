#include <stdio.h>
#include <conio.h>

int main()
{
    float s;
    float c;
    printf("enter total amount of sales:");
    scanf("%f", &s);

    if (s < 5000)
    {
        c = s * 1 / 100;
        printf("total commission amount is %f", c);
    }

    else if (s > 5000 && s < 8000)
    {
        c = s * 3 / 100;
        printf("total commission amount is %f", c);
    }
    else if (s > 8000 && s < 11000)
    {
        c = s * 5 / 100;
        printf("total commission amount is %f", c);
    }
    else
    { c = s * 10 / 100;
    printf("total commission amount is %f", c);}

    return 0;
}