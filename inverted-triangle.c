#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int ct = n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < ct; j++)
        {
            printf("* ");
        }
        ct--;
        printf("\n");
    }
}