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
	struct bits *pbit;//����ָ��
	pbit = (struct bits *)malloc(sizeof(struct bits) * 4);
	//�����ڴ棬
	int *pint;
	pint = (int *)pbit;//�����ڴ�
	*pint = 0;//��ʼ��
	scanf_s("%d", pint);//���ݵ�ַ��ʼ���ڴ�
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
	//��λ��ǰ
	//0000 0000
	//0000 0000
	//0000 0001
	//0000 0001
	//��λ��ǰ��λ����(������еĴ洢��ʽ)
	//0000 0001
	//0000 0000
	//0000 0000
	//0000 0000
	printf("%x", &num);
	system("pause");;
}