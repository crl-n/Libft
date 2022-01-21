#include "libft.h"

size_t	ft_intlen_base(int value, int base)
{
	size_t	len;

	len = 0;
	if (value == 0)
		return (1);
	if (base == 10 && value < 0)
	{
		value = -value;
		len++;
	}
	while (value > 0)
	{
		value = value / base;
		len++;
	}
	return (len);
}
