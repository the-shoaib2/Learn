#include <stdio.h>
int main()
{
float A, B, C;
scanf("%f %f %f", &A, &B, &C);
if (A+B>C && A+C>B &&B+C>A)  //trivuj er condition 
{
    printf("Perimetro = %.1f\n", A+B+C); // trivuj porisima
}
else {
    printf("Area = %.1f\n", (A+B)*C/2); // trapizom area frmula

}

    return 0;
}


