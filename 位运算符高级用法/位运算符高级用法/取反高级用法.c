#include <stdio.h>
#include <stdlib.h>

void main()
{//��4������һ�����ڽṹ����룬�����ڴ����
	unsigned char ch = 73;//���73��4���������������������������
	//���ȣ�74��4��������Ĩƽ
	printf("%d\n", ch - (ch&~3));
	system("pause");
}

//����ĳЩ��������Ҫ�ض������ݣ������λ���йأ����Խ���ȡ��
void main1()
{
	unsigned char ch = 73;//01001001
	unsigned short sh = 16385;//0100 0000 0000 0001
	ch = ch & ~1;
	sh = sh & ~1;
	printf("%d,%d\n", ch, sh);
	system("pause");
}