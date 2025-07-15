#include <stdio.h>

int a, b, sum, diff;

int main()
{
    printf("Enter two digits\n");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = b - a;

    printf("The sum of two digits is %d \n", sum);
    printf("The difference of two digits is %d ", diff);
    return 0;
}