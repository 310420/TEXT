#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k,l;
	printf("�п�J�d��A\n�q:");
	scanf("%d", &i);
	printf("��:");
	scanf("%d", &j);
	printf("�϶�:");
	scanf("%d", &k);
	printf("(1)�S�ഫ������:\n");
	l = i;
	while (i<=j)
	{
		printf("%d�S->%.2f����\n", i, i*0.454);
		i = i + k;
	}
	printf("(2)�����ഫ���S:\n");
	while (l <= j)
	{
		printf("%d����->%.2f�S\n", l, l/0.454);
		l = l + k;
	}
	system("pause");
	return 0;
}