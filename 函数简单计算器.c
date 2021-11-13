#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int calculate(int a,int c,int b)
{
	int value;
	if (c == '+')   value = a + b;
	else            value = a % b;
	return value;
}
int main(void)
{
	int a, b;
	char c;
	printf("input a+b or a%b:\n");
	scanf("%d%c%d",&a,&c,&b);
	printf("%d%c%d=%d",a,c,b,calculate(a,c,b));
	return 0;
}
