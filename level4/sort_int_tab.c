void sort_int_tab(int *tab, unsigned int size)
{
    int i;
    int temp;

    i = 0;
    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
            i++;
    }
}

#include <stdio.h>
int main(void)
{
    int tab[] = {3,5,4,1,2};
    unsigned int size = sizeof(tab) / sizeof(tab[0]);
    sort_int_tab(tab, size);
    int i = 0;
    while (i < size)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}