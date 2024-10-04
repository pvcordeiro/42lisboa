#include <unistd.h>

void	print_comb(void)
{
	char n1 = '0';
	char n2;
	char n3;
	
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				write(1, &n1, 1);
				write(1, &n2, 1);
				write(1, &n3, 1);
				if (n1 != '7')
					write(1, ", ", 2);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	print_comb();
	return (0);
}
