#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;

	printf("«Î ‰»Îa£¨bµƒ÷µ\n");
	scanf("%d,%d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d", a, b);
	return 0;
}