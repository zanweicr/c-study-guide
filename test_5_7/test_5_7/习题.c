#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	//��ӡ�žų˷���
//	int i = 0;
//	for (i = 1; i <= 9; i++)//��ӡ����
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//ȷ������
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
//	//��10�����е����ֵ
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
//	//1---100֮���ж��ٸ�9
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
//		//�ж�����
//		//��һ�ַ���---->�Գ���2--->i-1
//		//�ڶ��ַ���---->j=a*b  a����bС��sqrt(i)
//		//�����ַ���---->a����bС��i/2
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
//	printf("\nһ����%d������", count);
//	return 0;
//}