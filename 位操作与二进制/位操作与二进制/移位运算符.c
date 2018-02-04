#include <stdio.h>
#include <stdlib.h>
void main()
{
	//直接操作二进制
	unsigned char ch = 32;//0010 0000
	printf("%d\n", ch << 1);
	printf("%d\n", ch >> 4);

	system("pause");
}