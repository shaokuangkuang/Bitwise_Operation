#include <stdio.h>
#include <stdlib.h>
void main()
{
	float fl;
	scanf_s("%f", &fl);
	printf("%p\n", &fl);
	unsigned char *p = (unsigned char*)&fl;//�����ڴ�
	for (int i = 3; i >= 0; i--) {//��Ҫ�������
		unsigned char chs = p[i];//�����ֽ�ȡ������
		//����unsigned char���ͽ�������
		for (int j = 7; j >= 0; j--) {
			if (chs &(1 << j)) {
				printf("1");
			}
			else {
				printf("0");
			}
		}
		printf(" ");
	}

	system("pause");
}