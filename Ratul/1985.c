#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int product , quantity;
    float total = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &product, &quantity);
        
        switch (product)
        {
        case 1001:
            total  +=  quantity * 1.50;
            // total  = total + quantity * 1.50;
            break;

        case 1002 :
        total += quantity * 2.50;
        break;
        case 1003 :
        total += quantity * 3.50;
        break;
        case 1004 :
        total += quantity * 4.50;
        break;
            case 1005 :
        total += quantity * 5.50;
        break;
        default:
            break;
        }
    }
    
    printf("%.2f\n", total);

    return 0;
}