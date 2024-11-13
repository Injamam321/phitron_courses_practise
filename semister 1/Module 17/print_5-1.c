#include<stdio.h>
    void fun(int n)
    {
        if(n==0) //base case which control recursion
        return;
        printf("%d \n", n);
        fun(n-1);
    }
    int main()
    {
        fun(5); 
      return 0;
    }
 

