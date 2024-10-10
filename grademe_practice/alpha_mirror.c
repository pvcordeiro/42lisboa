#include <unistd.h>
void	alpha_mirror(char *str)
{
	char	mirror_char;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			mirror_char = 'z' - (*str - 'a');
		else if (*str >= 'A' && *str <= 'Z')
			mirror_char = 'Z' - (*str - 'A');
		else
			mirror_char = *str;
		write(1, &mirror_char, 1);
		str++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
