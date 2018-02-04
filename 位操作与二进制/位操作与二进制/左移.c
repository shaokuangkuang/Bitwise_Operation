#include <stdio.h>
#include <stdlib.h>

//左移
void main()
{//移位在cpu的寄存器中运算
	unsigned char ch = 1;
	printf("%d\n", ch << 1);
	printf("%d\n", ch << 2);
	printf("%d\n",ch);//移位不会改变操作数
	printf("%d\n", ch = (ch << 2));
	//左移以为，相当于成于2

	printf("%d\n", ch = ch << 7);//左移需要考虑数据是否溢出
	//溢出的数据无法读取

	system("pause");
}