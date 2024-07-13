#include <stdio.h>
int main()
{
    int n;
    printf("Length of the word: ");
    scanf("%d", &n);
    char a[n];
    printf("Enter the word: ");
    scanf("\n%[^\n]s", a);

    for (int i = 0; i < n; i++, printf("\n"))
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i == n - j - 1 )
            {

                printf("%c ", a[i]);
            }
            else
            {
                printf("  ");
            }
        }
    }
}