#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, d, e,f;
	printf("請輸入5個數字:");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if (b > a)
	{
		f = a;
		a = b;
		b = f;
	}
	if (c > b)
	{
		f = b;
		b = c;
		c = f;
	}
	if (d > c)
	{
		f = c;
		c = d;
		d = f;
	}
	if (e > d)
	{
		f = d;
		d = e;
		e = f;
	}




	if (b > a)
	{
		f = a;
		a = b;
		b = f;
	}
	if (c > b)
	{
		f = b;
		b = c;
		c = f;
	}
	if (d > c)
	{
		f = c;
		c = d;
		d = f;
	}
	if (e > d)
	{
		f = d;
		d = e;
		e = f;
	}



	if (b > a)
	{
		f = a;
		a = b;
		b = f;
	}
	if (c > b)
	{
		f = b;
		b = c;
		c = f;
	}
	if (d > c)
	{
		f = c;
		c = d;
		d = f;
	}
	if (e > d)
	{
		f = d;
		d = e;
		e = f;
	}


	if (b > a)
	{
		f = a;
		a = b;
		b = f;
	}
	if (c > b)
	{
		f = b;
		b = c;
		c = f;
	}
	if (d > c)
	{
		f = c;
		c = d;
		d = f;
	}
	if (e > d)
	{
		f = d;
		d = e;
		e = f;
	}


	if (b > a)
	{
		f = a;
		a = b;
		b = f;
	}
	if (c > b)
	{
		f = b;
		b = c;
		c = f;
	}
	if (d > c)
	{
		f = c;
		c = d;
		d = f;
	}
	if (e > d)
	{
		f = d;
		d = e;
		e = f;
	}
	printf("最大值:%d\n",a );
	printf("最小值:%d\n", e);
	printf("平均值:%.2f\n",(float)(a+b+c+d+e)/5 );
	printf("中間值:%d\n",c );

	system("pause");
	return 0;

}