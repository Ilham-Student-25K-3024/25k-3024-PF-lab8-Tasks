#include <stdio.h>

int main() {
    int i, j;

    printf("Classroom Seating Arrangement (O = Occupied, - = Empty)\n\n");

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            // Checkerboard pattern: occupy if (i + j) is even
            if((i + j) % 2 == 0)
                printf("O ");
            else
                printf("- ");
        }
        printf("\n");
    }

    return 0;
}

