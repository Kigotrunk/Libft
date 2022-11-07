void ft_bzero (void *str, site_t n)
{
    char *dest;

    str = dest;
    while (n)
    {
        *str = 0;
        str++;
        n++;
    }
}