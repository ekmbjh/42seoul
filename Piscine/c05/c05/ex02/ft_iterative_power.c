int	ft_iterative_power(int nb, int power)
{
	int result;
	int cnt;

	if (power < 0)
		return (0);
	cnt = 0;
	result = 1;
	while (cnt < power)
	{
		result = result * nb;
		cnt++;
	}
	return (result);
}
