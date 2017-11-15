#include<stdio.h>
void main()
{
	int n,s=0;
	printf("\nEnter +ve and -ve nos & -1 to exit\n");
	do
	{
		printf("No: ");
		scanf("%d",&n);
		if(n>0)
			s+=n;
	}while(n!=-1);
	printf("Sum of +ve nos is: %d\n",s);
}
