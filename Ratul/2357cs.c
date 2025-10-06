// number is divisible by 2357 or divisible by  or by both or none
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0 && num % 3 == 0 && num % 5 == 0 && num == 0)
    {
        printf("%d is divisible by 2, 3, 5, 7\n", num);
    }
    else if (num % 2 == 0 && num % 3 == 0 && num % 5 == 0)
    {
        printf("%d is divisible by 2, 3, 5\n", num);
    }
    else if (num % 2 == 0 && num % 3 == 0 && num % 7 == 0)
    {
        printf("%d id divisible by 2, 3, 7\n", num);
    }
    else if (num % 2 == 0 && num % 5 == 0 && num % 7 == 0)
    {
        printf("%d is divisible by 2, 5, 7\n", num);
    }
    else if (num % 3 == 0 && num % 5 == 0 && num % 7 == 0)
    {
        printf("%d is divisible by 3, 5, 7\n", num);
    }
    else if (num % 2 == 0 && num % 3 == 0)
    {
        printf("%d is divisible by 2, 3\n", num);
    }
    else if (num % 2 == 0 && num % 5 == 0)
    {
        printf("%d is divisible by 2, 5\n", num);
    }
    else if (num % 2 == 0 && num % 7 == 0)
    {
        printf("%d is divisible by 2, 7\n", num);
    }
    else if (num % 3 == 0 && num % 5 == 0)
    {
        printf("%d is divisible by 3, 5\n");
    }
    else if (num % 3 == 0 && num % 7 == 0)
    {
        printf("%d is divisible by 3, 7\n");
    }
    else if (num % 5 == 0 && num % 7 == 0)
    {
        printf("%d is divisible by 5, 7\n");
    }
    else if (num % 2 == 0)
    {
        printf("%d is divisible by 2\n", num);
    }
    else if (num % 3 == 0)
    {
        printf("%d is divisible by 3\n", num);
    }
    else if (num % 5 == 0)
    {
        printf("%d is divisible by 5\n", num);
    }
    else if (num % 7 == 0)
    {
        printf("%d is divisible by 7\n", num);
    }
    else
    {
        printf("%d is not divisible by 2, 3, 5, 7\n", num);
    }

    return 0;
}