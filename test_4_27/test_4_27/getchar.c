#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int ch = 0;
	char ret = 0;
	char password[20] = { 0 };
	printf("��������������:->");
	scanf("%s", &password);
	while ((ch = getchar()) != '\n')//��������ʱ��һ��������,��getchar������������������,ʹ�����˸
	{
		;
	}
	printf("��ȷ��(Y\N):->");
	scanf("%c",&ret);
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("�������\n");
	}

	
}