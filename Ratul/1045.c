#include <stdio.h>
int main()
{
    double a, b, c, A, B, C;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a >= b && a >= c)
    {
        // boro theke choto sajano
        A = a;
        if (b >= c)
        {
            B = b;
            C = c;
        }
        else
        {
            B = c;
            C = b;
        }
    }
    else if (b >= a && b >= c)
    {
        A = b;
        if (a >= c)
        {
            B = a;
            C = c;
        }
        else
        {
            B = c;
            C = a;
        }
    }
    else if (c >= a && c >= b)
    {
        A = c;
        if (a >= b)
        {
            B = a;
            C = b;
        }
        else
        {
            B = b;
            C = a;
        }
    }
    if (A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (A * A == B * B + C * C)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (A * A > B * B + C * C)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (A * A < B * B + C * C)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A == B && B == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (A == B || B == C || A == C)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
