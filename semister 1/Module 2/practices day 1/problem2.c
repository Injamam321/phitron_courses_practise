#include<stdio.h>
int main()
{
    int a,b,sum, diff, product;
    float div;
    scanf("%d %d",&a, &b);
     sum = a + b;
    diff = a - b;
    product = a * b;
     if (b != 0){
        div=(float) a / b;

     }
    
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, diff);
    printf("%d * %d = %d\n",a, b, product);
    printf("%d / %d = %.2f\n", a, b, div);
    return 0;
}

