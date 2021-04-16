#include <stdio.h>

int main()
{
    char a;
    printf("enter any chaaracter:");
     scanf ( "%c", &a);

     if (65 <= a && a <= 90)
    {
        printf("'%c'is capital letter", a);
    }
    else if (97 <= a && a <= 122)
    {
        printf("'%c' is small letter", a);
    }
    else if (48 <= a && a <= 57)
    {
        printf("'%c'is a digit", a);
    }
    else
        printf("'%c'is a special character", a);

    return 0;
}