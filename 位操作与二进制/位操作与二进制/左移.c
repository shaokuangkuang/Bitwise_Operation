#include <stdio.h>
#include <stdlib.h>

//����
void main()
{//��λ��cpu�ļĴ���������
	unsigned char ch = 1;
	printf("%d\n", ch << 1);
	printf("%d\n", ch << 2);
	printf("%d\n",ch);//��λ����ı������
	printf("%d\n", ch = (ch << 2));
	//������Ϊ���൱�ڳ���2

	printf("%d\n", ch = ch << 7);//������Ҫ���������Ƿ����
	//����������޷���ȡ

	system("pause");
}