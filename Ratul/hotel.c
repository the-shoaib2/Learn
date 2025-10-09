#include <stdio.h>
int main()
{

    int p, c, d, r;
    int r_c, total_rooms, total_cost;

    scanf("%d %d %d %d", &p, &c, &d, &r);

    // Room category cost
    if (r == 1)
        r_c = 2000;
    else if (r == 2)
        r_c = 4000;
    else if (r == 3)
        r_c = 5000;
    else
    {
        printf("Invalid Room Category\n");
        return 0;
    }

    // Calculate required rooms
    int adult_rooms = (p + 1) / 2;
    int child_rooms = (c + 1) / 2;

    // total_rooms = (adult_rooms > child_rooms) ? adult_rooms : child_rooms;

    if (adult_rooms > child_rooms)
    {
        total_rooms = adult_rooms;
    }
    else
    {
        total_rooms = child_rooms;
    }

    // Calculate total cost
    total_cost = (r_c * total_rooms * d) + (c * 1000 * d);

    printf("Total cost : %d\n", total_cost);

    return 0;
}
