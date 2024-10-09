#include "ft.h"
#include <unistd.h>
void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	putchar('a');
	return (0);
}
