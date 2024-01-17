#include <stdio.h>

char *ft_strstr(const char *str, const char *to_find)
{
    // Cas particulier : si l'aiguille est une chaîne vide, retourner le foin
    if (*to_find == '\0')
        return (char *)str;

    while (*str)
    {
        const char *h = str;
        const char *n = to_find;

        // Tant que les caractères correspondent et ne sont pas nuls
        while (*h && *n && (*h == *n))
        {
            h++;
            n++;
        }

        // Si l'aiguille est entièrement trouvée, retourner le pointeur au début de l'occurrence
        if (*n == '\0')
            return (char *)str;

        // Sinon, avancer dans le foin
        str++;
    }

    // Si l'aiguille n'est pas trouvée, retourner NULL
    return NULL;
}

int main(void)
{
    char str[] = "Hello, world!";
    char to_find[] = "world";

    char *result = ft_strstr(str, to_find);

    if (result != NULL)
        printf("needle at position: %lld\n", result - str);
    else
        printf("needle not found in str.\n");

    return 0;
}
