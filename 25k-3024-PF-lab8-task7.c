#include <stdio.h>

int main() {
	int i,j;
    int temp[4][4] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };

    printf("Cold spots found:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            int current = temp[i][j];
            int cold = 1;  // assume cold until proven otherwise

            // check north
            if (i > 0 && temp[i - 1][j] <= current)
                cold = 0;
            // check south
            if (i < 3 && temp[i + 1][j] <= current)
                cold = 0;
            // check west
            if (j > 0 && temp[i][j - 1] <= current)
                cold = 0;
            // check east
            if (j < 3 && temp[i][j + 1] <= current)
                cold = 0;

            if (cold) {
                printf("- At position (%d,%d) with temperature %dC\n", i + 1, j + 1, current);
            }
        }
    }

    return 0;
}

