#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {  // Loop for rows (1 to n)
        for (j = 1; j <= i; j++) {  // Loop for printing stars in each row
            printf("* ");
        }
        printf("\n");  // Move to the next line after printing stars
    }

    return 0;
}