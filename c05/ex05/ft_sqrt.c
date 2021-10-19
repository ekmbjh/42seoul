int	ft_sqrt(int nb)
{
	long long i;

	if (nb <= 0)
		return (0);
	if (nb <= 1)
		return (nb);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return ((int)i);
		i++;
	}
	return (0);
}
