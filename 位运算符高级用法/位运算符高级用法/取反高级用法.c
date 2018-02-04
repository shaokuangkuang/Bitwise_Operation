#include <stdio.h>
#include <stdlib.h>

void main()
{//被4整除，一般用于结构体对齐，便于内存查找
	unsigned char ch = 73;//求出73被4整除的余数，不许用余数运算符
	//首先，74被4整除的数抹平
	printf("%d\n", ch - (ch&~3));
	system("pause");
}

//进行某些操作，需要特定的数据，如果与位数有关，可以借助取反
void main1()
{
	unsigned char ch = 73;//01001001
	unsigned short sh = 16385;//0100 0000 0000 0001
	ch = ch & ~1;
	sh = sh & ~1;
	printf("%d,%d\n", ch, sh);
	system("pause");
}