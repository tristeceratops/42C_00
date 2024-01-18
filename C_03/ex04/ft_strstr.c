#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    if (*to_find == '\0')
        return (char *)str;

    while (*str)
    {
        const char *h = str;
        const char *n = to_find;

        while (*h && *n && (*h == *n))
        {
            h++;
            n++;
        }

        if (*n == '\0')
            return (char *)str;

        str++;
    }

    return NULL;
}

int main(void)
{
    char str[] = "Hello, wor  testld!";
    char to_find[] = "world";

    char *result = ft_strstr(str, to_find);

    if (result != NULL)
        printf("needle at position: %lld\n", result - str);
    else
        printf("needle not found in str.\n");

    return 0;
}
