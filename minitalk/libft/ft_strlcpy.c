#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t  size) //  зачем мы копируем из одного массива в другой ,если все равно вывооди только количество символов в  src
{
    size_t i;

    i = 0;
    if (!dst || !src)
        return (0);
    if (size > 0)
    {
        while (src[i] != '\0' && i < (size - 1)) // почему вычитаем из size единицу
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    i = 0;
    return (ft_strlen(src));
}
/*
int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        printf("%u\n", ft_strlcpy(argv[1], argv[2], 3));
    }
    return 0;
}*/