#include <stdio.h>
#include <stdlib.h>
//&��������ĳЩ�ƶ�λ

void main1()
{
	unsigned char ch = -1;//1111 1111
	int  intn = ch;//��ֵ���Զ���������ת������λ�����Ϊ����λ����ֵ
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
//�����ͬΪ�㣬��ͬΪ1(�쳯�����ֹ���)
//���ݽ������ַ��������ܿ��ٵ���������
void main3()
{//���ܳ����������͵ļ��ޣ���������
	int a = 100;
	int b = 10;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d,%d\n", a, b);

	a = a * b;
	b = a /b;//ע���������ͣ�����������ķ���
	a = a / b;
	printf("%d,%d\n", a, b);
	//��򲻻�Խ��
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("%d,%d\n", a, b);
	system("pause");
}

void main4()
{//��nλ���Ա�ʾ�������Ϊ2^n-1
	unsigned char ch1 = 1;   //0000 0001
	unsigned char ch2 = ~ch1;//1111 1110


	system("pause");
}
//����
//���� 3/2 = 1
//0011  �����ƶ���������0����λ������//0001
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
		num >>= 1;//�൱�ڳ���2
		printf("%u\n", num);
	}
	system("pause");
}