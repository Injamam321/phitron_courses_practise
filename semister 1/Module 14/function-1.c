#include<stdio.h>

    int sum(int x, int y)
    {
        int sum=x+y;
        return sum;
    }
    int main()
        {
            int s=sum(40,40);
            printf("%d",sum);
            printf("%d\n",sum(30,40));
            printf("%d\n",sum(50,40));
            return 0;
        }
 

