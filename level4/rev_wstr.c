#include <unistd.h>

// Function to print a string
void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

// Function to find the length of a string
int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

// Main function
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    char *str = argv[1];
    int len = ft_strlen(str);
    int end = len;
    int start;

    while (end > 0)
    {
        // Find the end of the current word
        while (end > 0 && str[end - 1] != ' ')
            end--;

        // Print the word
        start = end;
        while (str[start] && str[start] != ' ')
            write(1, &str[start++], 1);

        // Print a space if it's not the last word
        if (end > 0)
            write(1, " ", 1);

        // Move to the previous word
        end--;
        // while (end > 0 && str[end - 1] != ' ')
        //     end--;
    }

    write(1, "\n", 1);
    return 0;
}
