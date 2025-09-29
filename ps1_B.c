#include <stdio.h>

int main()
{
    /* 
    Problem 2
    Calculate the area of a circle and 
    modify the same program to calculate the volume of a cylinder
    using the radius and height supplied by the user.
    */

    int p = 3.14;
    int r;
    int height;
    int lol;

    printf("To calculate the Area of circle and Perimeter of Cylinder\n Enter the radius of Circle\n");
    scanf("%d", &r);
    printf("Enter the height of cylinder\n");
    scanf("%d", &height);

    printf("The Area of circle with radius %d is %d\n", r, p*r*r);
    printf("The perimeter of a cylinder with height %d is %d\n", height, p*r*r*height);

    return 0;
}