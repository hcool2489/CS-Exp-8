#include<stdio.h>
void main()
{
	int i,n,c=0;
	printf("Enter a number to check for prime: ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
			break;
		}
	}
	if(c==0)
		printf("%d is a Prime number\n",n);
	else
		printf("%d is NOT a Prime number\n",n);
}
