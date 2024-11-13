#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // read input integer N
    if (n <= 0) { // if N is negative or zero, print from N to 1
        for (int i = n; i <= 1; i++) {
            printf("%d ", i);
        }
    } else { // otherwise, print from 1 to N
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
    }
    return 0;
}
