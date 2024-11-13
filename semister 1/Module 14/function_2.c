#include <stdio.h>

int value(void) 
{
    int x;
    scanf("%d", &x);
    return x;
}

int main() 
{
    int result = value();// call function
    printf("The value is: %d\n", result);
    return 0;
}
