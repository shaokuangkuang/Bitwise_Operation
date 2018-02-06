#include <stdio.h>
#include <stdlib.h>

struct data
{
	unsigned char ch1 : 1;//结构体限定了位数的变量，不能越界，否则会产生溢出
	unsigned char ch2 : 2;//虽然为了字节对齐，有很多空白的，但仍然越界就会溢出
	unsigned int num : 10;//1111 1111 1100 0000 0000 0000 0000 0000
	unsigned char : 5;//可以定义无名的位，没有任何意义，无法利用
	//unsigned char ch3 : 10;//位字段成员不可以大于单元的长度
	//unsigned char ch3:0;//位的宽度必须大于零

};
//如果是两个字符相加小于8位，会填充一个字节，通过位操作操作位字段
//1000 1100 0000 0000 0000 0000 0000 0000
//1111 1111 1100 0000 0000 0000 0000 0000
//结构体的字节对齐，多余的0是不能利用的

void main1()
{
	printf("%d\n", sizeof(struct data));//占一个字节
	//1000 1100 空着是为了内存对齐
	//ch1   ch2
	struct data data1;
	data1.ch1 = 2;//10 
	printf("%d\n", data1.ch1);
	getchar();
}

void mian()
{
	//结构体没有初始化，就不会分配内存，不能直接打印地址
	//printf("%p\n", data.ch1);不能直接打印结构体变量成员的地址
	struct data data1;
	printf("%p\n", &data1);//可以去结构体变量的地址
	//printf("%p\n", &data1.ch1);//不可以取位域的地址
	//位域，通过位运算来实现，位域变量成员的地址，无法取出
	system("pause");
}