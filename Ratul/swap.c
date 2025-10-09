#include <stdio.h>

int main()
{
    int a = 5, b = 10, temp;

    // Using temp variable
    temp = a;
    a = b;
    b = temp;

    // printf("%d\n", temp);
    // temp = 0;
    // printf("%d\n", temp);

    // Without using temp variable
    a = a + b; // a = 15 (5 + 10)
    b = a - b; // b = 5 (15 - 10)
    a = a - b; // a = 10 (15 - 5)

    // Using XOR bitwise operator
    a = a ^ b; // a = 15 (5 ^ 10)
    b = a ^ b; // b = 5 (15 ^ 10)
    a = a ^ b; // a = 10 (15 ^ 5)

    printf("a = %d, b = %d\n", a, b);

    return 0;    }
