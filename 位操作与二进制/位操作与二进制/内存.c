#include <stdio.h>
#include <stdlib.h>

void main1()
{
	int num = 1;
	printf("%d\n", sizeof(num));
}

void main()
{
	int num = 010;
	//��λ->���ֽڣ���λ->���ֽ�
	printf("%d\n", num);
	getchar();
}