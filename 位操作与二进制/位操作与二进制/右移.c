#include <stdio.h>
#include <stdlib.h>

void main()
{
	unsigned char ch = 128;
	printf("%d\n", ch >> 1);
	printf("%d\n", ch >> 2);
	printf("%d\n", ch);
	//右移相当于除于二
	system("pause");
}