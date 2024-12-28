#include <stdio.h>

void printPascalsTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int val = 1; // Start each row with 1

        // Print spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1); // Calculate the next value in the row
        }

        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    printPascalsTriangle(rows);

    return 0;
}
