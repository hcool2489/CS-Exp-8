#include<stdio.h>
void main()
{
	int i,j,c=1;
	for(i=1;i<=4;i++,c=1)
	{
		for(j=1;j<=4;j++)
		{
			if(i>=(5-j))
				printf("%d ",c++);
			else
				printf("  ");
		}
		printf("\n");
	}
}
