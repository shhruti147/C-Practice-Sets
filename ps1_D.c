#include <stdio.h>

int main()
{
    /*
    Problem 4:
    Write a program to calculate simple interest
     for a set of values representing principal, 
     number of years and rate of interest.
    */

  /*  float P = 50000;
    float R = 3.5;
    float T = 3;
printf("The Simple Intrest for the following is %f",P*R*T/100); 

 to accept input from user */
float p, r, t;
printf("Enter the Principle Amount\n");
scanf("%f", &p);
printf("Enter the Rate of Interest\n");
scanf("%f", &r);
printf("Enter the number of years\n");
scanf("%f", &t);

printf("The Simple Intrest for the following is %f",p*r*t/100);

    return 0;
}