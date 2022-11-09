int		ft_atoi(const char *str)
{
	int x;
	int i;
	int y;

	i = 0;
	x = 1;
	y = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			x *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		y = y * 10 + (str[i] - 48);
		i++;
	}
	return (y * x);
}