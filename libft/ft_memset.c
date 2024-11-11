/*
NAME
	memset - fill memory with a constant byte

SYNOPSIS
	#include <string.h>

	void *memset(void *s, int c, size_t n);

DESCRIPTION
	The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.

RETURN VALUE
	The memset() function returns a pointer to the memory area s.
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