#include <stdio.h>
#include <stdlib.h>

//��� 1^1 = 0;0^0=0;1^0=1;0^1=1;
//��ͬΪ0����ͬΪ1
//0^1=0 0^1=1;������0����1��1��򶼻���תʵ�ַ�ת
//0^0=0 0^1=1;������0����1��0��򶼲��ᷢ���仯
//��������ʵ�ַ�ת����ָ����λ��ת

//������������,�������м������ʵ�����������Ľ���
//������Ҫ��Լ�ڴ�ĳ���
//x = x ^ y; y = y ^ x; x=x^y
//x=20 y= 10;
//x=x+y;30
//y=x-y;20
//x=x-y30-20=10
//ԭ��һ��
void main()
{
	unsigned char ch1 = 200;//0001 0100
	unsigned char ch2 = 101;//0000 1010
	printf("before%d,%d\n", ch1, ch2);
	ch1 = ch1 ^ ch2;
	ch2 = ch2 ^ ch1;
	ch1 = ch1 ^ ch2;
	printf("after=%d,%d\n", ch1, ch2);
	system("pause");
}

//ָ��Ϊ��ת
void main3()
{
	unsigned char ch2 = 255;//1111 1111
	unsigned char ch1 = 60;//0011 1100
	printf("%d\n", ch2^ch1);
	system("pause");
	
}

void main2()
{
	unsigned char ch1 = 169;//1010 1001
	unsigned char ch2 = 255;//1111 1111
	printf("%d", ch1^ch2);//ȫ����ת
	system("pause");
}

void main1()
{
	unsigned char ch1 = 169;//1010 1001
	unsigned char ch2 = 15;//0000 1111
							//1010 0110
	printf("%d\n", ch1^ch2);
	system("pause");
}