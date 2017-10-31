#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,l,t,j,k,p;
	i = 0;
	p = 1;
	
	while (i!=4)
	{

		printf("(1)正方形\n(2)長方形\n(3)等腰直角三角形\n(4)結束\n請選功能:");	
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("正方形邊長:");
			scanf("%d", &l);
			for ( j = 0; j < l; j++)
			{
				for (k = 0;k < l; k++)
				{
					printf("*");
				}
				printf("\n");
			}
			break;
		case 2:
			printf("長方形高和寬:");
			scanf("%d %d", &l,&t);
			for (j = 0; j < l; j++)
			{
				for (k = 0; k < t; k++)
				{
					printf("*");
				}
				printf("\n");
			}
			break;
		case 3:
			printf("等腰直角三角形邊長:");
			scanf("%d", &l);
			for (j = 0; j < l; j++)
			{
				for (k = 0; k < p; k++)
				{
					printf("*");	
				}
				p++;
				printf("\n");
			}
			break;
		case 4:
			break;
		default:
			printf("請重新輸入");
			break;
		}

	}		
	printf("結束!\n");
	system("pause");
	return 0;


}