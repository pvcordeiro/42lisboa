char	*ft_strcpy(char *dest, char *src)
{
	char *holder;

	holder = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (holder);
}

int	main(void)
{
	
}
