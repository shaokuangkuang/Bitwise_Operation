#include <stdio.h>
#include <stdlib.h>
//左边移动的时候，右边都是填充0
//右边移动的时候，如果无符号数据，左边填充0
//如果是有符号，正数按照符号为0填充0，负数按照符号位1填充1
void main()
{

	unsigned char ch1 = 1;
	char ch2 = -1;
	printf("%d\n", ch1 = ch1 << 2);
	printf("%d\n", ch2 = ch2 << 1);
	system("pause");
	//左边移动的时候，右边都是填充0
	//右边移动的时候，如果是无符号数据，左边填充0
	//如果是有符号，正数按照符号位填充0，负数按照符号位填充1
}