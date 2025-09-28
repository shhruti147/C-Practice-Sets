#include <stdio.h>

int main()
{
    /*
    Problem 1
    Write a C program to calculate area of a rectangle:
    a.Using hard coded inputs.
    b.Using inputs supplied by the user.
    */


    int length, breadth;
    /*
    a. Using Hard Coded Inputs
    int length = 3;
    int breadth = 7;
    printf("The Area of Rectangle is %d", lenth*breadth);
    */

    // b. Using Inputs Supplied by the User
     printf("Enter length of rectangle\n");
     scanf("%d", &length);

     printf("Enter the breadth of rectangle\n");
     scanf("%d", &breadth);

     printf("The Area of Rectangle is %d", length*breadth);
    return 0;
}