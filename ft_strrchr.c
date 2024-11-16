#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;

	end = s;
	while (*end)
		end++;
	while (end >= s)
	{
		if (*end == (char)c)
			return ((char *)end);
		end--;
	}
	return (NULL);
}
