#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, dump;
	int c; 


	printf("��ȯ�� �� ������ �Է��ϼ���. >>");
	scanf("%d %d", &x, &y);
	puts("");
	printf("�Է��� �� ��: x = %d and y = %d\n\n", x, y);
	
	printf("�ӽ� ���� ��� �̿� ���[1]\n");
	printf("������ �������� ��ȯ ���[2]\n");
	printf("������ ���������� ��ȯ ���[3]\n");
	printf("XOR ������ ^ �̿� ���[4]\n\n");

	printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >>");
	scanf("%d", &c);
	
	if (c == 1)
	{
		dump = x;
		x = y;
		y = dump;
		
	}
	if (c == 2)
	{
		x = x + y;
		y = x - y;
		x = x - y;

	}
	if (c == 3)
	{
		x = x * y;
		y = x / y;
		x = x / y;
	}
	if (c == 4)
	{
		x = x ^ y;
		y = x ^ y;
		x = x ^ y;
	}
	puts("");
	printf("��ȯ�� �� ��: x = %d and y = %d", x, y);
	puts("");
}