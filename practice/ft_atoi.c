int	ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + *str - 48;
		str++;
	}
	return (result * sign);
}
#include <stdio.h>
int	main(int argc, char *argv[])
{
	(void) argc;
	int	test = ft_atoi(argv[1]);
	printf("%d", test);
	return (0);
}
