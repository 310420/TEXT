#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k,l;
	printf("請輸入範圍，\n從:");
	scanf("%d", &i);
	printf("到:");
	scanf("%d", &j);
	printf("區間:");
	scanf("%d", &k);
	printf("(1)磅轉換成公斤:\n");
	l = i;
	while (i<=j)
	{
		printf("%d磅->%.2f公斤\n", i, i*0.454);
		i = i + k;
	}
	printf("(2)公斤轉換成磅:\n");
	while (l <= j)
	{
		printf("%d公斤->%.2f磅\n", l, l/0.454);
		l = l + k;
	}
	system("pause");
	return 0;
}