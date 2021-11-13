#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

long gcdl2(int x, int y)
{
	long gcdl;
	if (x % y == 0)	return gcdl = y;
	else
	{
		return gcdl2(y, x % y);
	}
	return gcdl;
}
int main(void)
{
	int  a, b;
	printf("input a:");
	scanf("%d",&a);
	printf("input b:");
	scanf("%d", &b);
	printf("%d和%d的最大公约数是：%d",a,b,gcdl2(a,b));
	return 0;
}
