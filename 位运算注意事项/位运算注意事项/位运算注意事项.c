#include <stdio.h>
void main()
{
	char ch = 'A';
	short sh = 123;
	int num = 12345;
	float fl = 12.3;
	double db = 23.9;
	printf("%d,%d,%d,%d,%d,%d\n", ch & 1, ch | 1, ch ^ 1, ~ch, ch << 1, ch >> 2);
	printf("%d,%d,%d,%d,%d,%d\n", sh & 1, sh | 1, sh ^ 1, ~sh, sh << 1, sh >> 2);
	printf("%d,%d,%d,%d,%d,%d\n", num & 1, num | 1, num ^ 1, ~num, num << 1, num >> 2);
	//位运算,不适用于实数，仅仅适用于整数，字符
	//printf("%d\n", db << 1);不和法
	//c语言的位运算只能操作整数，字符，事实是指数方式表示的，
	//不适用于位于
	system("pause");
}