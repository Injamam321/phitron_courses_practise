#include <stdio.h>

void square(int x) 
{
    int square = x * x;
    printf("%d squared is= %d\n", x, square);
}

int main() 
{
    int x = 5;
    square(x);
    return 0;
}
