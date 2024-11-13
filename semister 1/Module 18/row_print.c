#include<stdio.h>
int main()
{
    
    int row,col; 
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0; i<row; i++)
    {
       for(int j=0; j<col; j++)
       {
        scanf("%d ",&a[i][j]);
       }
    }
    // for printing input  output  
    /*    for(int i=0; i<row; i++)
    {
       for(int j=0; j<col; j++)
       {
        printf("%d ",a[i][j]);
       }
       printf("\n");
    }      
    */
   int f;
   scanf("%d",&f);
   for(int i=0; i<col; i++)
   {
    printf("%d ",a[f][i]);
   }

    return 0;
}

