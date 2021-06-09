// geeksforgeeks contest problem

#include <stdio.h>


int main() {
	//code
	int t, N,median,s=0,s1=0,i;
	//scanf("%d",&t);
	printf("enter N: ");
	scanf("%d",&N);
	median=(N+1)/2;
	for(i=1;i<median;i++)
	{
	    s=s+i;
	}
	printf("%d ",s);
	for(int j=median+1;j<=N;j++)
	{
	    s1=s1+j;

	}
	printf("%d",s1);










	return 0;
}
