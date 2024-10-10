int	ft_atoi(const char *str)
{
	int	result = 0;
	int	sign = 1;

	while (*str == '-')
	{
		sign = -sign;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - 48;
		str++;
	}
	return(result * sign);
}
