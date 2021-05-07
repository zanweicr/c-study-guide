#define _CRT_SECURE_NO_WARNINGS 1








////打印1000--2000年之间的闰年
//#include <stdio.h>
//
//int main()
//{
//	//简化代码
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//

	/*printf("该区间所有的闰年为:");
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d ", i);
		}
		else if(i%400 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}*/




////求两个数的最大公约数(需要用到辗转相除法)
//#include <stdio.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d",&m,&n);
//	while (m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("两个数的最大公约数:%d", n);
//	return 0;
//}




////打印1--100之间所有3的倍数的数
//#include <stdio.h>
//
//int main()
//{
//	//用for循坏
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//	
//	
//	//用while循坏所写
//	/*int i = 1;
//	int b = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("1--100之间第%d个3的倍数为:%d\n",b,i);
//			b++;
//		}
//		i++;
//	}
//
//	return 0;*/
//}

//输入三个数,按照大小依次排列
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		c = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("三个数依次排列为：a = %d,b = %d,c = %d\n", a, b, c);
//	return 0;
//}