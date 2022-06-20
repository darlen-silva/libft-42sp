int	ft_isalpha(int ch)
{
	if ((ch < 65 || ch > 122) || (ch > 90 && ch < 97))
	{
		return (0);
	}
	return (1);
}
