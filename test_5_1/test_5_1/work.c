#define _CRT_SECURE_NO_WARNINGS 1








////��ӡ1000--2000��֮�������
//#include <stdio.h>
//
//int main()
//{
//	//�򻯴���
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

	/*printf("���������е�����Ϊ:");
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




////�������������Լ��(��Ҫ�õ�շת�����)
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
//	printf("�����������Լ��:%d", n);
//	return 0;
//}




////��ӡ1--100֮������3�ı�������
//#include <stdio.h>
//
//int main()
//{
//	//��forѭ��
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
//	//��whileѭ����д
//	/*int i = 1;
//	int b = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("1--100֮���%d��3�ı���Ϊ:%d\n",b,i);
//			b++;
//		}
//		i++;
//	}
//
//	return 0;*/
//}

//����������,���մ�С��������
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
//	printf("��������������Ϊ��a = %d,b = %d,c = %d\n", a, b, c);
//	return 0;
//}