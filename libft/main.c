#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

   //Test case for ft_strlcat
   const char s[] = "0123456789";
   char d[10] = "ABC";

   strlcat(d, s, sizeof(d));

   printf("Src\t: %s\nDest\t: %s\nSize\t: %ld\n", s, d, sizeof(d));

    return 0;

}