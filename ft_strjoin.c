char    *ft_strjoin(char const *s1, char const *s2)
{
    int x;
    int y;
    int cs1;
    int cs2;
    int cs3;
    char const *s3;

    x = 0;
    y = 0;
    cs1 = 0;
    cs2 = 0;
    cs3 = 0;
    while (s1[x])
        x++;
    while (s2[y])
        y++;
    s3 =(char const *)malloc((x + y) * (char const));
    while(s1[cs1])
    {
        s3[cs3] = s1[cs1];
        cs3++;
        cs1++;
    }
    while(s2[cs2])
    {
        s3[cs3] = s2[cs2];
        cs3++;
        cs2++;
    }
    if (!s3)
        return (0);
    return (s3);
}