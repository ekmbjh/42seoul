int	ft_iterative_factorial(int nb)
{
	int fac;
	int i;

	if (nb < 0)
		return (0);
	i = nb;
	fac = 1;
	while (i > 0)
	{
		fac = fac * i;
		i--;
	}
	return (fac);
}
