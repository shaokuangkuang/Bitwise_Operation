#include <stdio.h>
#include <stdlib.h>

//都是二进制数进行操作
//为与 11->1 01,10,00->0
//1&0=0,0&0 = 0-> 清零的动作
//1&1=1 0&1=0->保留某些位不变

//位与实现取出指定位
void main()
{
	unsigned char ch = 169;//10101001
	unsigned char ch1 = 60;//00111100
	printf("%d", ch&ch1);//去出中间四位
	system("pause");

}

//位与可以实现按位清零
void main2()
{
	unsigned char ch = 155;//1111 1111
	unsigned char ch1 = 15;//0000 1111
	printf("%d\n", ch&ch1);//清零高四位
	unsigned char ch2 = 240;
	printf("%d\n", ch&ch2);//清零低四位
	unsigned char ch3 = 0;//0000 0000
	printf("%d\n", ch3&ch);
	system("pause");
}
void main1()
{
	unsigned char ch1 = 3;//0000 0011
	unsigned char ch2 = 240;//1111 0000
	unsigned char ch3 = 255;//1111 1111
	printf("%d\n", ch1&ch2);
	printf("%d\n", ch2&ch3);
	system("pause");
}