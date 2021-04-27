#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int ch = 0;
	char ret = 0;
	char password[20] = { 0 };
	printf("请输入您的密码:->");
	scanf("%s", &password);
	while ((ch = getchar()) != '\n')//输入密码时有一个缓存区,用getchar可以消除缓存区内容,使光标闪烁
	{
		;
	}
	printf("请确认(Y\N):->");
	scanf("%c",&ret);
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("密码错误\n");
	}

	
}