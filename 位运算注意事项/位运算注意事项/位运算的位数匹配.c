#include <stdio.h>
#include <stdlib.h>

void main()
{
	unsigned char ch = 12;//1���ֽ�
	unsigned int num = 123;//4���ֽ�
	printf("%d\n", ch&num);//���Զ������������͵�ת��
	printf("%d,%d,%d\n", sizeof(ch), sizeof(num), sizeof(ch&num));
	//ch&num�Զ������������ת��

	//�޷��ŵ��������ͻ����з�������������λ�����ʱ����Ҫ�Զ�����ת��
	//���ֽ�����ֽ�ת����ʱ�򣬻��Զ����0


	system("pause");
}
//�����ڲ����ǰ����뱣������
//�з��Ÿ����ڽ���λ�����ʱ����Ҫ�Զ�����ת����
//���ֽ�����ֽ�ת����ʱ���������Զ����λ����λ���Զ����0��
//�������Զ����1
//Ҳ���Ƿ���λ
void main()
{
	char ch = -1;
	int num = -3;
	printf("%p,%p\n", &ch, &num);
	printf("%d\n", ch&num);
	printf("%d,%d,%d\n", sizeof(ch), sizeof(num), sizeof(ch&num));
	system("pause");
}

 