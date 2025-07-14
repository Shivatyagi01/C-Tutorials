#include <stdio.h>

char ch, fname[30], fullName[100];

int main()
{
    printf("Enter an character\n");
    scanf("%c", &ch);
    printf("Enter an character\n");
    scanf("%s", &fname);
    printf("Type your full name: \n");
    scanf(" %99[^\n]", fullName);

    printf("%c\n", ch);
    printf("%s\n", fname);
    printf("%s\n", fullName);

    return 0;
}