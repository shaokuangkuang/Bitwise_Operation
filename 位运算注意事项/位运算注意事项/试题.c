#include <stdio.h>
#include <stdlib.h>

//����������ж��ٸ�һ
void main()
{
	int x = 9999;
	int i = 0;
	while (x) {
		i++;
		x = x & (x - 1);
	}
	printf("%d\n", i);
	getchar();
}