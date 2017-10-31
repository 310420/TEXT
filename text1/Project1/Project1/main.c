#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k,l,m,n;
	k = 5;
	m = -1;
	for (i = 1; i <= 5; i++)
	{
		for ( j = 1; j < k; j++)
		{
			printf(" ");
		}
		if (i>1)
		{
			printf("*");
		}
		
		for ( l = 0; l <m ; l++)
		{
			printf(" ");
		}
		printf("*\n");
		m=m+2;
		k--;
	}
    m =5 ;
	k=2;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j < k; j++)
		{
			printf(" ");
		}
		if (i<4)
		{
			printf("*");
		}
		
		for (l = 1; l <=m; l++)
		{
			printf(" ");
		}
		printf("*\n");
		m = m -2;
		k++;
	}

	system("pause");
	return 0;
}