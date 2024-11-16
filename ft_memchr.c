#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		byte;

	ptr = (const unsigned char *)s;
	byte = (unsigned char)c;
	while (n--)
	{
		if (*ptr == byte)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
