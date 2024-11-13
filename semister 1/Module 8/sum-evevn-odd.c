#include <stdio.h>

int main() 
{
    int n, num, sum_even = 0, sum_odd = 0;
    scanf("%d", &n); // read input integer N
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &num);
         // read input number V
        if (num % 2 == 0) 
        { // if the number is even, add it to sum_even
            sum_even += num;
        }
         else 
        { // otherwise, add it to sum_odd
            sum_odd += num;
        }
    }
    printf("%d %d", sum_even, sum_odd); // output the sum of even numbers first, then sum of odd numbers
    return 0;
}

