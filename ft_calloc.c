#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
	void    *ptr;

    if (count == 0 ||size == 0)
        return (0);
	ptr = (void*)malloc(count * size);
	return (ptr);
}
