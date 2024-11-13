#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    int element=row*col;
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d ", &a[i][j]);     /* code */
        }
        
    }
   int count=0; 
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
        
    }
    printf("%d\n",count);
    if(element==count)
    {
        printf("zero matrix\n");
    }
    else
    {
        printf("not zero matrix\n");
    }
    return 0;
}

