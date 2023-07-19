#include "main.h" 

void print_times_table(int n);

int main(void)
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n >= 0 && n <= 15)
    {
        print_times_table(n);
    }
    else
    {
        printf("n should be between 0 and 15 (inclusive).\n");
    }

    return (0);
}

void print_times_table(int n)
{
    if (n < 0 || n > 15)
    {
        return;
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("%-5d ", i * j);
        }
        printf("\n");
    }
}

