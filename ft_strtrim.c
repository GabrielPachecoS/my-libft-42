#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	trimmed_str = (char *)s1 + i;
	i = ft_strlen(trimmed_str) - 1;
	while (trimmed_str[i] && ft_strrchr(set, trimmed_str[i]))
		i--;
	return (ft_substr(trimmed_str, 0, i + 1));
}
