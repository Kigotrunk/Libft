char    *ft_strdup(const char *s)
{
    int     x;
    char    *ptr;
    int     y;

    x = 0;
    while (s[x])
    {
        x++;
    }
    ptr = (char *)malloc(x * char);
    while(s[y])
    {
        ptr[y] = s[y];
        y++;
    }
    if (!ptr)
        return (0);
    return (ptr);
}