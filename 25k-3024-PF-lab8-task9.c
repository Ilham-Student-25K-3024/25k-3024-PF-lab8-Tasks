#include <stdio.h>

int main() {
    int i, j, space;

    for(i = 1; i <= 5; i++) {
        // Left pyramid for stars (odd numbers: 1,3,5,7,9)
        for(space = 5; space > i; space--)
            printf(" ");
        for(j = 1; j <= (2*i - 1); j++)
            printf("*");
        printf(" | ");

        // Number pyramid
        for(space = 5; space > i; space--)
            printf(" ");
        for(j = 1; j <= (2*i - 1); j++)
            printf("%d", j);
        printf(" | ");

        // Alphabet pyramid
        for(space = 5; space > i; space--)
            printf(" ");
        for(j = 1; j <= (2*i - 1); j++)
            printf("%c ", 'A' + j - 1);
        printf("\n");
    }

    return 0;
}

