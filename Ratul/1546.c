#include <stdio.h>
int main()
{
    int N, K, C;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &K);

        for (int j = 0; j < K; j++)
        {
            scanf("%d", &C);
            switch (C)
            {
            case 1:
                printf("Rolien\n");
                break;
            case 2:
                printf("Naej\n");
                break;
            case 3:
                printf("Elehcim\n");
                break;
            default:
                printf("Odranoel\n");
                break;
            }
        }
    }
    return 0;
}
