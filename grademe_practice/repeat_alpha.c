#include <unistd.h>
void	repeat_alpha(char *str)
{
	int	result;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			result = *str - 'a' + 1;
		else if (*str >= 'A' && *str <= 'Z')
			result = *str - 'A' + 1;
		else
		{
			write(1, str, 1);
			str++;
			continue;
		}
		while (result--)
			write(1, str, 1);
		str++;	
	}
}
int	main(int argc, char *argv[])
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
