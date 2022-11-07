void *memset (void *dest, int d, size_t n)
{
  unsigned char *ptr;

  *ptr = dest;
  while (len-- > 0)
    *ptr++ = n;
  return dest;
}
