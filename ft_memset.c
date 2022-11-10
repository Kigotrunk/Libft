void *memset (void *dest, int d, size_t len)
{
  unsigned char *ptr;

  *ptr = dest;
  while (len-- > 0)
    *ptr++ = val;
  return dest;
}