#include <stdio.h>
#include <stdlib.h>

//位或运算 1|1=1;0|1 = 1;1|0=1 0|0=0;
//有1就得1,与0相或不发生改变

void main1()
{
	unsigned char ch1 = 169;//1010 1001
	unsigned char ch2 = 15;//0000 1111
	printf("%d\n", ch1|ch2);//实现低四位换成1
	system("pause");

}

void main()
{
	unsigned char ch1 = 169;//1010 1001
	unsigned char ch2 = 240;//1111 0000
	printf("%d\n", ch1 | ch2);
	system("pause");
}