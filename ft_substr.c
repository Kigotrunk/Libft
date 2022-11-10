char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    char    *ptr;
    int     y;

    y = 0;
    ptr = (char *)malloc(len * char);
    while(s[start] || len > 0)
    {
        ptr[y] = s[start];
        y++;
        start++;
        len--;
    }
    if (!ptr)
        return (0);
    return (ptr);
}