#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,l,t,j,k,p;
	i = 0;
	p = 1;
	
	while (i!=4)
	{

		printf("(1)�����\n(2)�����\n(3)���y�����T����\n(4)����\n�п�\��:");	
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("��������:");
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
			printf("����ΰ��M�e:");
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
			printf("���y�����T�������:");
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
			printf("�Э��s��J");
			break;
		}

	}		
	printf("����!\n");
	system("pause");
	return 0;


}