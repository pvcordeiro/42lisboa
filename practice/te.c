#include <unistd.h>

void	ft_last_word(char *s)
{
	while (*s)
		s++;
	s--;
	while (*s == ' ' || *s == '\t')
		s--;
	while (*s != ' ' && *s != '\t')
		s--;
	s++;
	while (*s && *s != ' ' && *s != '\t')
	{
		write(1, s, 1);
		s++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
