#include<stdio.h>
#include<math.h>
void main()
{
	int i;
	printf("\n\tDeg[x]\tsin(x)\tcos(x)\n\n");
	for(i=0;i<=360;i+=30)
		printf("\t%d\t%.2f\t%.2f\n",i,sin(i),cos(i));
	printf("\n");
}
