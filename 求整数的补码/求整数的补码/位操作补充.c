#include <stdio.h>
#include <stdlib.h>
//&可以清零某些制定位

void main1()
{
	unsigned char ch = -1;//1111 1111
	int  intn = ch;//赋值会自动进行类型转换，高位会填充为符号位的数值
	//int a = -1//1111 1111 1111 1111  1111 1111 1111 1111
	unsigned int inte = ch;
	system("pause");
}

void main2()
{
	unsigned char ch = 255;//1111 1111
							//1111 0000
	unsigned char ch1 = 240;
	ch = ch & ch1;
	printf("%d", ch);
	system("pause");
}
//异或：相同为零，不同为1(天朝民政局规则)
//数据交换的种方法（不能开辟第三变量）
void main3()
{//不能超过数据类型的极限，否则会溢出
	int a = 100;
	int b = 10;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d,%d\n", a, b);

	a = a * b;
	b = a /b;//注意数据类型，有数据溢出的风险
	a = a / b;
	printf("%d,%d\n", a, b);
	//异或不会越界
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("%d,%d\n", a, b);
	system("pause");
}

void main4()
{//有n位可以表示的最大数为2^n-1
	unsigned char ch1 = 1;   //0000 0001
	unsigned char ch2 = ~ch1;//1111 1110


	system("pause");
}
//左移
//整数 3/2 = 1
//0011  向右移动，左边填充0多了位会抛弃//0001
void main()
{
	//0001
	//0010
	//0100
	unsigned int num = 1;
	for (int i = 0; i < 31; i++) {
		num <<= 1;
		printf("%u\n", num);
	}
	for (int i = 0; i < 31; i++) {
		num >>= 1;//相当于除于2
		printf("%u\n", num);
	}
	system("pause");
}