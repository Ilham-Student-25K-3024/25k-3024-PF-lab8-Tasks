#include <stdio.h>

int main() {
	int i,j;
    int photos[2][12] = {
        {12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15},  // Year 1
        {10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16}   // Year 2
    };

    for (i = 0; i < 2; i++) {
        printf("\n====================\n");
        printf("Year %d:\n", i + 1);
        printf("====================\n");

        for (j = 0; j < 12; j++) {
            printf("Month %2d: %d photos\n", j + 1, photos[i][j]);
        }
    }

    return 0;
}

