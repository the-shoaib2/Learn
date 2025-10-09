#include <stdio.h>
#include <stdlib.h>  // For abs() function
int main ()
{

int a, b, c , MaiorAB = 0, MaiorABC = 0;
scanf("%d %d %d", &a, &b, &c);
MaiorAB = (a + b + abs(a - b)) / 2; // abs holo porom maner jonno
MaiorABC = (MaiorAB + c + abs(MaiorAB - c)) / 2;
printf("%d eh o maior\n", MaiorABC);
 

    return 0;
}


