#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	//打印九九乘法表
//	int i = 0;
//	for (i = 1; i <= 9; i++)//打印九行
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//确定列数
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <=100 ; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %lf",sum);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	//求10个数中的最大值
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	//1---100之间有多少个9
//	int i = 0;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d", count);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		//判断素数
//		//第一种方法---->试除法2--->i-1
//		//第二种方法---->j=a*b  a或者b小于sqrt(i)
//		//第三种方法---->a或者b小于i/2
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//			
//		}
//
//	}
//	printf("\n一共有%d个素数", count);
//	return 0;
//}