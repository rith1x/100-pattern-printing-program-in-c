#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int ct = n;
    int x = 0;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < ct; j++)
        {
            if (x / 10 < 1)
            {
                printf("0%d ", x);
            }
            else
            {
                printf("%d ", x);
            }
            x++;
        }
        ct--;
        printf("\n");
    }
}