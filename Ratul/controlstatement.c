#include <stdio.h>
int main()
{

    //  number is divisible by 2 or divisible by 3 or by both or none      if else use kore C programming code
    int N;
    scanf("%d", &N);
    if (N % 2 == 0)
    {
        if (N % 3 == 0)
            printf("Divisible by both 2 and 3\n");
    }
    else if (N % 2 == 0)
    {
        printf("Divisible by 2 only\n");
    }
    else if (N % 3 == 0)
    {
        printf("Divisible by 3 only\n");
    }
    else
    {
        printf("Not divisible by both 2 and 3\n");
    }

    return 0;
}
