#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Print line
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n-i; j++) 
        {
            printf(" ");
        }
        
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
            
        }
        printf("\n");
    }

    return 0;
}
