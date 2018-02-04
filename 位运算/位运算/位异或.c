#include <stdio.h>
#include <stdlib.h>

//异或 1^1 = 0;0^0=0;1^0=1;0^1=1;
//相同为0，不同为1
//0^1=0 0^1=1;无论是0还是1与1异或都会逆转实现反转
//0^0=0 0^1=1;无论是0还是1与0异或都不会发生变化
//异或可以是实现反转或者指定的位反转

//交换两个变量,不借助中间变量，实现两个变量的交换
//用与需要节约内存的场合
//x = x ^ y; y = y ^ x; x=x^y
//x=20 y= 10;
//x=x+y;30
//y=x-y;20
//x=x-y30-20=10
//原理一样
void main()
{
	unsigned char ch1 = 200;//0001 0100
	unsigned char ch2 = 101;//0000 1010
	printf("before%d,%d\n", ch1, ch2);
	ch1 = ch1 ^ ch2;
	ch2 = ch2 ^ ch1;
	ch1 = ch1 ^ ch2;
	printf("after=%d,%d\n", ch1, ch2);
	system("pause");
}

//指定为反转
void main3()
{
	unsigned char ch2 = 255;//1111 1111
	unsigned char ch1 = 60;//0011 1100
	printf("%d\n", ch2^ch1);
	system("pause");
	
}

void main2()
{
	unsigned char ch1 = 169;//1010 1001
	unsigned char ch2 = 255;//1111 1111
	printf("%d", ch1^ch2);//全部反转
	system("pause");
}

void main1()
{
	unsigned char ch1 = 169;//1010 1001
	unsigned char ch2 = 15;//0000 1111
							//1010 0110
	printf("%d\n", ch1^ch2);
	system("pause");
}