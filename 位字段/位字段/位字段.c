#include <stdio.h>
#include <stdlib.h>

//节约内存，嵌入式物联网设备开发，需要节约内存
//struct date
//{
//	unsigned int day;//4个字节 
//	unsigned int month;
//	unsigned int year;
//};//需要耗费12个字节内存，很多场合用不到

//位字段——限定结构体某个变量用固定的二进制

struct date
{//占4个字节，32位，节约了内存
	unsigned int day : 5;//限定变量用5个二进制位
						 //1111 1000
	unsigned int month : 4;//1111 0000
	unsigned int year : 14;
	//1111 1111
	//1111 1100
	//CPU按照字节来寻址，所以至少一个字节是寻址的最小单位
	//适用于结构体，不适用于想听位数的结构-位域
};

void main()
{
	struct date date1, *pdate;
	date1.day = 31;
	date1.month = 9;
	date1.year = 2014;

	pdate = (struct date*)malloc(sizeof(struct date));
	//指针需要分配内存，并完成指针类型的转换
	//
	printf("%d\n", sizeof(struct date));
	pdate->day = 1;
	pdate->month = 12;
	pdate->year = 2014;
	printf("%d,%d,%d\n", date1.day, date1.month, date1.year);
	printf("%d,%d,%d\n", pdate->day, date1.month,date1.year);
	getchar();
}