#include "libft.h"

static size_t	ft_intlen_base(int n, int base)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}

static int	min_int(int base)
{
	if (base == 10)
		return (ft_strdup("-2147483648"));
}

char	*ft_itoa_base(int value, int base)
{
	(void) value;
	(void) base;

	if (value == MIN_INT)
		return (min_int(base));
	return (NULL);
}
