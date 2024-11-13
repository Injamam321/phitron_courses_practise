#include<stdio.h>

    void fun()
    {
        printf("fun\n"); //stack overflow 
        fun();
    }
    int main()
    {
        fun(); 
      return 0;
    }
  


