#include "libft.h"

static int	ft_is_in_set(char c, char const *set)
{
	size_t	src;

	src = 0;
	while (set[src])
	{
		if (c == set[src])
			return (1);
		src++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		src;
	int		start;
	int		end;
	char	*ptr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	src = 0;
	while (ft_is_in_set(s1[src], set) == 1)
		src++;
	start = src;
	src = (ft_strlen(s1)) ? ft_strlen(s1) - 1 : 0;
	while (ft_is_in_set(s1[src], set) == 1)
		src--;
	end = src;
	if (start > end)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (!(ptr = (char *)ft_calloc(end - start + 2, sizeof(char))))
		return (NULL);
	src = 0;
	while (start <= end)
		ptr[src++] = s1[start++];
	return (ptr);
}
