#include <stdio.h>
int main()
{

int n;
scanf("%d", &n);
int product, quantity;
float total = 0;
int i = 0;
while (i<n)

{
    scanf ("%d %d", &product, &quantity);
    i ++ ;
    if (product == 1001){
    total += quantity * 1.50;
    }
    else if (product == 1002){
    total += quantity * 2.50;
    }
    else if (product == 1003){
    total += quantity * 3.50;
    }
    else if (product == 1004){
    total += quantity * 4.50;
    }
    else if (product == 1005){

    total += quantity * 5.50;
    }
    
}
printf ("%.2f\n", total);




    return 0;
}