// temp is used to temperarily store the value of *a
void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//Declare a & b as int not pointer
//Use & to pass memory address of a and b
#include <stdio.h>
int main ()
{
	int a = 5;
	int b = 10;
	printf("Before swap: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After swap: a = %d, b = %d\n", a, b);
}
