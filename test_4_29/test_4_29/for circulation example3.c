//例题三:在一个有序数组中查找某个数字p,编写int binsearch(int x,int v[],int n);
//功能:在v[0]<=v[1]<=v[2]<=....<=v[n-1]的数组中查找x 
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//


//算法精化,速率提高,只需进行log2n;
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int k = 19;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



//摒弃,最坏需计算10次,算法效率低,需要算法精确,二分法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标为%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("没找到");
//	}
//	return 0;
//}