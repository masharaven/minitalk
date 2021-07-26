#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
   return (0);
}
/*#include<ctype.h>
#include<stdio.h>

int main(void)
{
   char c = '*';
   if(isascii(c))
      printf("%c - is ascii\n",c);
   else
      printf("%c - isn't ascii\n",c);
   return 0;
}*/