#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x % 2 != 0)
            {
                if (x / 10 < 1)
                {
                    printf("0%d", x);
                }
                else
                {
                    printf("%d", x);
                }
            }
            else
            {
                printf("  ");
            }
            x++;
        }
        printf("\n");
    }
}