#include <stdio.h>

char *ft_strncat(char *dest, const char *src, size_t n)
{
    char *original_dest = dest;

    // Trouver la fin de la chaîne dest
    while (*dest)
        dest++;

    // Concaténer au plus n caractères de src à dest
    while (*src && n > 0)
    {
        *dest++ = *src++;
        n--;
    }

    // Ajouter le caractère nul à la fin
    *dest = '\0';

    return original_dest;
}

int main(void)
{
    char first_str[20] = "Hello, ";
    char second_str[] = "world!";

    printf("Before ft_strncat:\n");
    printf("First String: %s\n", first_str);
    printf("Second String: %s\n", second_str);

    ft_strncat(first_str, second_str, 4);  // Concatenate only 4 characters

    printf("\nAfter ft_strncat:\n");
    printf("Concatenated String: %s\n", first_str);

    return 0;
}
