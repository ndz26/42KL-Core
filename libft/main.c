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
    char src[] = {1,2,3,4,5,6,7,8,9};
    char dest[15] = {0};

    ft_memcpy(dest, src, 4);
    int i = 0;

    while(i < 4)
    {
        printf("%d \tSrc: %p[%d]\tDest: %p\t[%d]\n", i, &src[i], src[i], &dest[i], dest[i]);
        i++;
    }

    i = 4;

    while(i < sizeof(dest))
    {
        printf("%d \tSrc: %p[%d]\tDest: %p\t[%d]\n", i, &src[i], src[i], &dest[i], dest[i]);
        i++;
    }
    */

   /*
   //Test case for ft_memcpy - overlapping
   char str[] = "Hey hippo";

   printf("Source\t: %s\n", str);
   ft_memcpy(str,str + 3, 4);
   printf("Dest\t: %s - ft_memcpy\n", str);
   */
   
   /* Test with memcpy
   char str[] = "Hey hippo";
   printf("Source\t: %s\n", str);
   memcpy(str,str + 3, 4);
   printf("Dest\t: %s - memcpy\n", str);
   */

  /*
  //Test case for ft_memmove - avoid overlapping
   char str[] = "Hey hippo";
   printf("Source\t: %s\n", str);
   ft_memmove(str,str + 3, 4);
   printf("Dest\t: %s\n", str);
   */
  
   ///* Test with memmove
   char str[] = "saya suka makan nasi 123456789 hehehe";
   printf("Source\t: %s\n", str);

   memcpy(str + 1,str, 4);
   printf("Dest\t: %s\n", str);

   strcpy(str, "saya suka makan nasi 123456789 hehehe");

   memmove(str + 1,str, 4);
   printf("Dest\t: %s\n", str);

   //*/

    return 0;

}