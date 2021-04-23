#include <stdio.h>


int main()
{
	//条件操作符 (exp1?exp2:exp3;)
	int a = 10;
	int b = 20;
	int max = 0;

	max = (a > b ? a : b);
	printf("max = %d",max);
	return 0;
}





//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("较大值为%d\n", max);
//	return 0;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是:%d", num1);
//	else
//		printf("较大值是:%d", num2);
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}