int ft_set(char const c, char const *s )
{
    int x;

    x = 0;
    while (s[x])
    {
        if (c == s[x])
            return (0);
        x++;
    }
    return (1);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char const *ptr;
    int x;
    int y;
    int z;

    x = 0;
    y = 0;
    z = 0;

    while(s1[x])
    {
        if (ft_set(s1[x], set))
            y++;
        x++;
    }
    ptr = (char const *)malloc(y * (char const))
    x = 0;
    while (s1[x])
    {
        if (ft_set(s1[x], set))
        {
            ptr[z] = s1[x];
            z++;
        }
        x++;
    }

}