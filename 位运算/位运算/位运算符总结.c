#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//ȡ���ǶԲ������ȡ���������Ĳ�����Դ�룬
//������Դ�������λ������ȫ��ȡ���õ����룬����һ�õ�����
void main()
{
	unsigned char ch1 = 168, ch2 = 133;
	printf("%d,%d", CHAR_MAX, CHAR_MIN);
	printf("��%d\n", ch1 & ch2);
	printf("��%d\n", ch1 | ch2);
	printf("���%d\n", ch1 ^ ch2);
	unsigned char ch3 = ~ch1, ch4 = ~ch2;
	printf("ȡ��%d,%d\n",~ch1, ~ch2);
	printf("%d,%d\n", ch3, ch4);
	system("pause");
}