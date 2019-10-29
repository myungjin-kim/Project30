#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, dump;
	int c; 


	printf("교환할 두 정수를 입력하세요. >>");
	scanf("%d %d", &x, &y);
	puts("");
	printf("입력한 두 수: x = %d and y = %d\n\n", x, y);
	
	printf("임시 저장 장소 이용 방법[1]\n");
	printf("덧셈과 뺄셈으로 교환 방법[2]\n");
	printf("곱셈과 나눗셈으로 교환 방법[3]\n");
	printf("XOR 연산자 ^ 이용 방법[4]\n\n");

	printf("위 교환 방법 중 한 번호를 선택하세요. >>");
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
	printf("교환한 두 수: x = %d and y = %d", x, y);
	puts("");
}