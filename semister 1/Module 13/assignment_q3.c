#include <stdio.h>

int count_before_zero(int ar[], int size) 
{
    

    for (int i = 0; i < size; i++) 
    {
        if (ar[i] == 0)
        {
            return i;
        }
    }

    return size;
}

int main() 
{
    int size, ar[100], i, count;
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
        scanf("%d", &ar[i]);
    }
    count = count_before_zero(ar, size);
    printf("%d\n", count);

    return 0;
}
