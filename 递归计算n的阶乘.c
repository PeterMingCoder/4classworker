#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

long long factorial2(int n)
{
	long long factorial;
	if (n == 1)  return factorial = 1;
	else		 return factorial = factorial2(n - 1) * n;
}
int main(void)
{
	int n;
	printf("input n:");
	scanf("%d",&n);
	printf("%lld",factorial2(n));
	return 0;
}