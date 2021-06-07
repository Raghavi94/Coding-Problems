
#include <stdio.h>
#include<math.h>

int main()
{
    int bin,dec=0,i=0,r;
    printf("Enter a binary number : ");
    scanf("%d",&bin);
    while(bin)
    {
        r=bin%10;

        dec+=r*pow(2,i);
        ++i;
        bin/=10;

    }
    printf("The decimal value is %d ",dec);
    return 0;
}
