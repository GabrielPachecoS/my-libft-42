#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	little_len = ft_strlen(little);
	i = 0;
	if (little_len == 0)
		return ((char *)big);
	while (*big && little_len + i <= len)
	{
		if (!ft_strncmp(little, big + i, little_len))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
