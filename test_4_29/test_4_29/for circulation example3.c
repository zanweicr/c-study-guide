//������:��һ�����������в���ĳ������p,��дint binsearch(int x,int v[],int n);
//����:��v[0]<=v[1]<=v[2]<=....<=v[n-1]�������в���x 
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//


//�㷨����,�������,ֻ�����log2n;
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
//			printf("�ҵ���,�±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



//����,������10��,�㷨Ч�ʵ�,��Ҫ�㷨��ȷ,���ַ�
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
//			printf("�ҵ���,�±�Ϊ%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("û�ҵ�");
//	}
//	return 0;
//}