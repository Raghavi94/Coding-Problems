
#include <stdio.h>

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int matrix[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The rotated elements are:");
    printf("\n");
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",matrix[j][n-1-i]);
            
        }
        printf("\n");
    }
    
    return 0;
}
