#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//取反是对补码进行取反，正数的补码是源码，
//负数：源码除符号位，其余全部取反得到反码，反加一得到补码
void main()
{
	unsigned char ch1 = 168, ch2 = 133;
	printf("%d,%d", CHAR_MAX, CHAR_MIN);
	printf("与%d\n", ch1 & ch2);
	printf("或%d\n", ch1 | ch2);
	printf("异或%d\n", ch1 ^ ch2);
	unsigned char ch3 = ~ch1, ch4 = ~ch2;
	printf("取反%d,%d\n",~ch1, ~ch2);
	printf("%d,%d\n", ch3, ch4);
	system("pause");
}