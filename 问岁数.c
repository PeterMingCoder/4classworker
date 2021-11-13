#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int calold(int n)
{
	int old;
	int i=n;
	if (i == 1)  return old = 10;
	else         return old=calold(i-1) + 2;
}
int main(void)
{
	int raking = 115;
	printf("%d",calold(raking)); 
	return 0;
}