void
	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void*)malloc(count * size);
	ft_bzero(ptr, count);
	return (ptr);
}
