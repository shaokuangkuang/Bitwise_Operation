#include <stdio.h>
#include <stdlib.h>
//printf���������������ת��
void main1()
{//%ֻ��ץȡ�ڴ��е����ݣ�����Ӧ�ĸ�ʽ����
	printf("%d\n", (int)10.3);//printf��������ʲô���ͣ����ᰲװ%d,%f��������
	printf("%f\n", (float)10);
	system("pause");
}

void main2()
{
	int num = 100;
	printf("%p\n", &num);//��ͬ�Ľ��ͷ�ʽ���в�ͬ���ͽ��

	getchar();
}
void main3()
{
	char ch = 1, ch1 = '1';//�ַ����ŵ�����
	printf("%d,%d\n", ch,ch1);
	getchar();
}
void main4()
{	//������ʱ��,�����������й�ϵ
	unsigned short num = 65535+1;//�������
	printf("%d\n", num);
	getchar();
}

void main()
{	
	//���룬������洢���ݵķ�ʽ
	short num = -1;
	printf("%d\n", num);
	printf("%u\n", num);//%u ������
	getchar();
}