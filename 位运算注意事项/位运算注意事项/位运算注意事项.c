#include <stdio.h>
void main()
{
	char ch = 'A';
	short sh = 123;
	int num = 12345;
	float fl = 12.3;
	double db = 23.9;
	printf("%d,%d,%d,%d,%d,%d\n", ch & 1, ch | 1, ch ^ 1, ~ch, ch << 1, ch >> 2);
	printf("%d,%d,%d,%d,%d,%d\n", sh & 1, sh | 1, sh ^ 1, ~sh, sh << 1, sh >> 2);
	printf("%d,%d,%d,%d,%d,%d\n", num & 1, num | 1, num ^ 1, ~num, num << 1, num >> 2);
	//λ����,��������ʵ���������������������ַ�
	//printf("%d\n", db << 1);���ͷ�
	//c���Ե�λ����ֻ�ܲ����������ַ�����ʵ��ָ����ʽ��ʾ�ģ�
	//��������λ��
	system("pause");
}