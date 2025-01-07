#include <stdio.h>
#include <string.h>

int is_prime(int n)
{
    int i;

    i = 2;
    while (i * i < n)
    {
        if (n % i == 0)
            return (0);
    }
    return (1);
}

int main(int ac, char **av)
{
    int n;
    int i;

    if (ac == 2)
    {
        i = 2;
        n = atoi(av[1]);
        if (n == 1)
            printf("1");
        while (n >= i)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                if (n == i)
                    break ;
                printf("*");
                n /= i;
                i = 1;
            }
            i++;
        }
    }
    printf("\n");
}