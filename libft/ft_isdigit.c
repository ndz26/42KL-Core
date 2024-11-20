/*isdigit()
              checks for a digit (0 through 9).
*/

int	ft_isdigit(int digit)
{
	while (digit >= 0 && digit <= 9)
	{
		return (1);
	}
	return (0);
}
