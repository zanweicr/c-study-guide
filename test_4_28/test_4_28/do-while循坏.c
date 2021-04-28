#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	
	for (i=1; i<=10; i++)
	{
		ret = 1;
		for (n = 1; n <= i; n++)
		{
			//ret = 1;如果将代码放在这,那么每次循坏都将ret弄为一,导致代码无效
			ret = ret * n;
		}
		sum = sum + ret;
	}
	printf("sum = %d", sum);
	return 0;
}