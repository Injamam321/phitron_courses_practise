#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for(int i=1; i<=(2*n)-1; i++)
    {
        //line print
        for(int j=1; j<=s; j++)
        {
            //space print
            printf(" ");

        }
        for(int j=1; j<=k; j++)
        {
            //star print
            printf("%d",j);
        }
        //line sas 
        if(i<=n-1)
        {
            s--;
            k=k+2;
        }
        else{
            s++;
            k=k-2;
        }
        printf("\n");
    }
    return 0;
}
