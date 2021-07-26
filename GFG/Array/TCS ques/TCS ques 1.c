#include<stdio.h>

int main()
{
    int N,c,k;
    printf("\n Enter the total number of candies : ");
    scanf("%d",&N);
    printf("\n Enter the minimum no of candies that is to be present in jar : ");
    scanf("%d",&k);
    printf("\n Enter the number of candies you need : ");
    scanf("%d",&c);
    if(c>0 && c<=k)
    {
        printf("\n Number of candies sold : %d",c);
        printf("\n Number of candies remaining : %d",N-c);

    }
    else
    {
        printf("\n Invalid input");
        printf("\n Number of candies remaining : %d",N);
    }
    printf("\n Refilled candies : %d",(N-c)+c);
    return 0;
}
