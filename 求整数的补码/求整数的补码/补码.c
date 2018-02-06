#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//1100 1100 1100 1100  1100 1100 1100 1100
//0000 0000 0000 0000  0000 0000 0000 0001

//1000 0000 0000 0000  0000 0000 0000 0000
void main()
{
	int num;
	scanf("%d", &num);
	int data = 1 << 31;
	for (int i = 1; i <= 32; i++) {//Ñ­»·±éÀú32Î»
		printf("%c", (num & data ? '1' : '0'));
		num <<=1;
		if (i % 4 == 0)
			printf(" ");

	}
	system("pause");
}