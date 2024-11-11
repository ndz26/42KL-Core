/*
DESCRIPTION
       The  bzero() function erases the data in the n bytes of the memory starting at
       the location pointed to by s, by writing zeros (bytes containing '\0') to that
       area.

       The  explicit_bzero()  function performs the same task as bzero().  It differs
       from bzero() in that it guarantees that compiler optimizations will not remove
       the  erase  operation  if the compiler deduces that the operation is "unneces‐
       sary".

RETURN VALUE
       None.
*/
#include <stddef.h>

void* ft_memset(void* s, int c, size_t n)
{
    unsigned char* ptr = s;

    while (n--)
    {
	 *ptr++ = (unsigned char)c;
    }
    return s;
}

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}