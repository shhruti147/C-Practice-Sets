#include <stdio.h>

int main()
{
    /*
    Problem 3
    Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).
    */

    float celcius;
    float a = 1.8;
    float b = 32;

    printf("Enter the Celcius you want to convert to Fahrenheit.");
    scanf("%f", &celcius);

    printf("%f Degree Celcius is %f Fahrenheit", celcius, celcius*a+b);
    return 0;
}