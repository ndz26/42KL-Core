#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
size_t strlcat(char *dst, const char *src, size_t dstsize) {
    size_t dlen = strnlen(dst, dstsize);
    size_t slen = strlen(src);

    if (dlen == dstsize) return dstsize + slen;
    if (slen < dstsize - dlen) {
        memcpy(dst + dlen, src, slen + 1);
    } else {
        memcpy(dst + dlen, src, dstsize - dlen - 1);
        dst[dstsize - 1] = '\0';
    }
    return dlen + slen;
}
*/

/*
char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    

    while(s[i] != (char) c)
    {
        if(s[i] == '\0')
        {
            return NULL;
        }
        s++;
    }
    return (char *)s;
}
*/

#include <stddef.h>

char *strnstr(const char *haystack, const char *needle, size_t len) {
    size_t needle_len;
    
    // If needle is an empty string, return haystack
    if (*needle == '\0') {
        return (char *)haystack;
    }
    
    needle_len = 0;
    while (needle[needle_len] != '\0') {
        needle_len++;
    }
    
    for (size_t i = 0; i <= len - needle_len; i++) {
        size_t j;
        for (j = 0; j < needle_len; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == needle_len) {
            return (char *)(haystack + i);
        }
    }
    return NULL;
}


int main()
{
/*
//Test case for ft_memset
char* memory = malloc(10);
ft_memset(memory, 2, 3);
int i = 0;

while(i < ft_strlen(memory))
{
    printf("Address: %p\tByte %i: %d\n", &memory[i], i, memory[i]);
    i++;
}
    free(memory);
*/

/*
//Test case for ft_bzero

char memory[10];
ft_bzero(memory, 2);
int i = 0;

while(i < sizeof(memory))
{
    printf("Address: %p\tByte %i: %d\n", &memory[i], i, memory[i]);
    i++;
}
*/

/*
//Test case for ft_memcpy
    char src[] = "abcdefgh";
    char dest[15];

    ft_memcpy(dest, src, 4);
    int i = 0;

    while(i < 4)
    {
        printf("%d \tSrc: %p[%c]\tDest: %p\t[%c]\n", i, &src[i], src[i], &dest[i], dest[i]);
        i++;
    }

    i = 4;

    while(i < sizeof(dest))
    {
        printf("%d \tSrc: %p[%c]\tDest: %p\t[%c]\n", i, &src[i], src[i], &dest[i], dest[i]);
        i++;
    }
    */
  
   /* Comparing memcpy with memmove
   char str[] = "abcdefgh";
   printf("Source\t: %s\n", str);

   ft_memcpy(str + 1,str, 4);
   printf("Dest\t: %s\n", str);

   strcpy(str, "abcdefgh");

   ft_memmove(str + 1,str, 4);
   printf("Dest\t: %s\n", str);
   */


    /*//Test case for ft_strlcpy
    const char src[] = "0123456789";
    char dest [10];

    ft_strlcpy(dest, src, sizeof(dest));

    printf("Src\t: %s\nDest\t: %s\nSize\t: %ld\n", src, dest, sizeof(dest));
    */

   /*
   //Test case for ft_strlcat
   const char s[] = "0123456789";
   char d[10] = "ABC";
   size_t result;

   ft_strlcat(d, s, sizeof(d));

   printf("Src\t: %s\nDest\t: %s\nSize\t: %ld\n", s, d, sizeof(d));
    */

   /*
   //Test case for ft_strchr
   const char *string = "Hello1234";
   int c = 'l';

   printf("%s",ft_strchr(string, c));
   */

   /*
   //Test case for ft_strrchr
   const char *string = "ABC123";
   int c = '1';

   printf("%s",ft_strrchr(string, c));

  */
    
    /*
    const char* str1 = "Hello";
    const char* str2 = "Hollo";
    size_t n = 3;
    
    printf("%d", ft_strncmp(str1, str2, n));

    return 0;
    */

   /*
    //Test for ft_memchr
    const char string[] = "Memorylane";
    char search = 'n';
    size_t n = sizeof(string);

    char *result = ft_memchr(string, search, n);

    printf("%c found at %s , %ld", search, result, result - string);

    return 0;
    */

    //Test for ft_memcmp

    const char *str1 = "Hellohehemeow";
    const char *str2 = "hehe";
    size_t n = 12;


    printf("%s", strnstr(str1, str2, n));

}