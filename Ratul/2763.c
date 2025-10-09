#include <stdio.h>
int main()
{
int XXX, YYY, ZZZ, DD;
scanf("%d.%d.%d-%d", &XXX, &YYY, &ZZZ, &DD);
printf("%03d\n",XXX);
printf("%03d\n",YYY);
printf("%03d\n",ZZZ);
printf("%02d\n",DD);

    return 0;
}