#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int swapped = 1; // Initialize swapped to enter the loop
    int i = 1;

    while (swapped) {
        swapped = 0;
        i = 1;
        while (i < size) {
            if (tab[i - 1] > tab[i]) {
                // Swap elements if they are in the wrong order
                temp = tab[i - 1];
                tab[i - 1] = tab[i];
                tab[i] = temp;
                swapped = 1;
            }
            i++;
        }
    }
}

int main(void)
{
    int array_int_test[5] = {7, -4, 1, -48, 2};

    ft_sort_int_tab(array_int_test, 5);

    printf("Sorted array:\n");
    int i = 0;
    while (i < 5) {
        printf("%d\n", array_int_test[i]);
        i++;
    }

    return 0;
}