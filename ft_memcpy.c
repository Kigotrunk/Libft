void  *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned int    x;
    char            *dest2;
    const char        *src2;

    dest2 = dest;
    src2 = src;
    x = 0;
    while (i < n)
    {
        dest2[x] = src2[x];
        x++;
    }
    return (dest);
}