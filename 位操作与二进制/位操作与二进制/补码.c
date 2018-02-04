#include <stdio.h>
#include <stdlib.h>
//printf不会进行数据类型转换
void main1()
{//%只是抓取内存中的数据，按相应的格式解析
	printf("%d\n", (int)10.3);//printf不管你是什么类型，都会安装%d,%f解析数据
	printf("%f\n", (float)10);
	system("pause");
}

void main2()
{
	int num = 100;
	printf("%p\n", &num);//不同的解释方式就有不同解释结果

	getchar();
}
void main3()
{
	char ch = 1, ch1 = '1';//字符与编号的区别
	printf("%d,%d\n", ch,ch1);
	getchar();
}
void main4()
{	//解析的时候,与数据类型有关系
	unsigned short num = 65535+1;//数据溢出
	printf("%d\n", num);
	getchar();
}

void main()
{	
	//补码，计算机存储数据的方式
	short num = -1;
	printf("%d\n", num);
	printf("%u\n", num);//%u 正整数
	getchar();
}