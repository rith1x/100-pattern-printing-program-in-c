#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Size: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        n++;
        printf("Size is incremented by 1\n");
    }
    int ct = n / 2;
    for (int i = 0; i < n - 1; i++)
    {

        if (i % 2 != 0)
        {
            for (int x = ct; x > 0; x--)
            {
                printf("  ");
            }
            ct--;
            for (int j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    ct = 0;
    for (int i = n; i > 0; i--)
    {

        if (i % 2 != 0)
        {
            for (int x = ct; x > 0; x--)
            {
                printf("  ");
            }
            ct++;
            for (int j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}