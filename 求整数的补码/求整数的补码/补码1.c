#include <stdio.h>
#include <stdlib.h>
struct bits
{
	unsigned char b1 : 1;
	unsigned char b2 : 1;
	unsigned char b3 : 1;
	unsigned char b4 : 1;
	unsigned char b5 : 1;
	unsigned char b6 : 1;
	unsigned char b7 : 1;
	unsigned char b8 : 1;
};
void main()
{
	struct bits *pbit;//创建指针
	pbit = (struct bits *)malloc(sizeof(struct bits) * 4);
	//分配内存，
	int *pint;
	pint = (int *)pbit;//共享内存
	*pint = 0;//初始化
	scanf_s("%d", pint);//根据地址初始化内存
	for (int i = 3; i >= 0; i--) {
		printf("%d%d%d%d %d%d%d%d ",
			pbit[i].b8, pbit[i].b7,
			pbit[i].b6, pbit[i].b5,
			pbit[i].b4, pbit[i].b3,
			pbit[i].b2, pbit[i].b1);
	}
	system("pause");
}


void main1()
{
	int num = 1;
	//0000 0000 000 0000  0000 0000 0000 0001
	//高位在前
	//0000 0000
	//0000 0000
	//0000 0001
	//0000 0001
	//低位在前高位还后(计算机中的存储方式)
	//0000 0001
	//0000 0000
	//0000 0000
	//0000 0000
	printf("%x", &num);
	system("pause");;
}