#include <stdio.h>

void printPattern(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print '^' on odd lines
        if (i % 2 != 0) {
            for (j = 1; j <= 2 * i - 1; j++) {
                printf("^");
            }
        }
        // Print stars on even lines
        else {
            for (j = 1; j <= 2*i-1; j++) {
                printf("*");
            }
        }
        
        // Print newline
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printPattern(N);
    return 0;
}
