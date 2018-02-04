#include <stdio.h>
#include <stdlib.h>

void main1()
{
	int num = 1;
	printf("%d\n", sizeof(num));
}

void main()
{
	int num = 010;
	//低位->低字节，高位->高字节
	printf("%d\n", num);
	getchar();
}