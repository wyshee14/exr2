#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int is_word;

    i = 0;
    is_word = 0;
    if(ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
            {
                is_word = 1;
            }
            else if (av[1][i] != ' ' && av[1][i] != '\t')
            {
                if (is_word == 1)
                    write (1, " ", 1);
                is_word = 0;
                write (1, &av[1][i], 1);
            }
            i++;
        }
    }
    write (1, "\n", 1);
}