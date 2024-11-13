#include<stdio.h>>
int main(){
    char a;
    scanf("%c",&a);
    if(a>=97 && a<=122)
    {  
         //small letter
        int answer=a-32;
        printf("%c",answer);
        
    }
    else{

        //capital letter
        int answer=a+32;
         printf("%c",answer);
        
        }
    
    return 0;
 
}