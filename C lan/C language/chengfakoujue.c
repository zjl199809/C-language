#include<stdio.h>

int main()
{
	int i=1;
	int j=1,a=0;

	for(i;i<=9;i++)
	{
		for(j;j<=i;j++)
		{
			a = i * j;
			printf("%d * %d = %d\t",j,i,a);
		}
		j=1;
		printf("\n");

	} 
	return 0;
}