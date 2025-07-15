#include <stdio.h>

float a, b, sum, diff, multiply, divide;

int main()
{
    printf("Enter two digits\n");
    scanf("%f %f", &a, &b);

    sum = a + b;
    diff = b - a;
    multiply = a * b;
    divide = a / b;

    printf("The sum of two digits is %.2f \n", sum);
    printf("The difference of two digits is %.2f \n", diff);
    printf("The product of two digits is %.2f \n", multiply);
    printf("The remainder of two digits is %.2f ", divide);
    return 0;
}