#include <stdio.h>


int main()
{
	//���������� (exp1?exp2:exp3;)
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
//	printf("�ϴ�ֵΪ%d\n", max);
//	return 0;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ��:%d", num1);
//	else
//		printf("�ϴ�ֵ��:%d", num2);
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}