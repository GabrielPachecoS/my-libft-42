#include "libft.h"
size_t	ft_strlen(const char *s)
{
	size_t	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}
