// wap to input lengts and breadth of rectangle and find wheather the area of rectangle is greather than perimeter or not

#include <stdio.h>

int main()
{
    int l;
    int b;
    int area;
    int perimeter;

    printf("enter length of rectangle:");
    scanf("%d", &l);

    printf("enter breadth of rectangle:");
    scanf("%d", &b);

    area=l*b;
    perimeter=2*l+2*b;
if (area>perimeter)
{
    printf("area is greater than perimeter");
    
}
else
    printf("perimeter is greater than area" );

    return 0;
}