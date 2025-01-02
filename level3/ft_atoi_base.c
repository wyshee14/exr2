// char to_lower(char c)
// {
//     if(c >= 'A' && c <= 'Z')
//         c += 32;
//     return(c);
// }

// int get_digits(char c, int base)
// {
//     int max_digits;

//     if (base <= 10)
//         max_digits = base - 1 + '0';
//     else
//         max_digits = base - 10 - 1 + 'a';
//     if (c >= '0' && c <= '9' && c <= max_digits)
//         return (c - '0');
//     else if (c >= 'a' && c <= 'f' && c <= max_digits)
//         return (c + 10 - 'a');
//     else
//         return (-1);
// }

// int ft_atoi_base(const char *str, int str_base)
// {
//     int sign;
//     int result;
//     int i;
//     int digits;

//     sign = 1;
//     result = 0;
//     i = 0;
//     if(str == NULL || str_base < 2 || str_base > 16)
// 		return(0);
//     if (str[i] == '-')
//     {
//         sign = -1;
//         i++;
//     }
//     while (str[i])
//     {
//         digits = get_digits(to_lower(str[i]), str_base);
//         if (digits == -1)
//             break ;
//         result = result * str_base + digits;
//         i++;
//     }
//     result *= sign;
//     return (result);
// }

int ft_atoi_base(const char *str, int str_base)
{
	int i;
	int sign;
	int c;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	if (str[i] == '\0' || str_base < 2 || str_base > 16)
		return(0);
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			c = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			c = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			c = str[i] - 'A' + 10;
		else
			break ;
		res = res * str_base + c;
		i++;
	}
	return (res * sign);
}

#include <stdio.h>
int main ()
{
    printf("%d\n", ft_atoi_base("1A", 20));
    printf("%d\n", ft_atoi_base("-101", 2));
    printf("%d\n", ft_atoi_base("7F", 16));
    printf("%d\n", ft_atoi_base("123", 10));
}
