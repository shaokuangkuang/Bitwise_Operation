#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//计算机负数按照补码解释
//
void main1()
{
	int x = 1;
	int y = -1;
	printf("x=%p,y=%p\n", &x, &y);
	system("pasue");
}

void main2()
{	
	printf("%d,%d\n", INT_MAX, INT_MIN);//%d只能显示INT_MIN->INT_MAX,显示的数据不正确
	printf("%d,%d\n", INT_MAX+1, INT_MIN);
	printf("%u,%u\n", UINT_MAX, 0);
	printf("%u,%u\n", UINT_MAX + 1, 0-1);
	system("pause");
}

void main3()
{
	int x = 4294967295;
	int y = -1;
	//1111 1111 1111 1111 1111 1111 1111 1111
	printf("%d\n", x);
	printf("%d,%u\n", y, y);
	getchar();
}

void main()
{
	unsigned int num = -1;
	printf("%d,%u\n", num, num);
	system("pasue");
}