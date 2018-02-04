#include <stdio.h>
#include <stdlib.h>

void main()
{

	unsigned char ch1 = 1;
	char ch2 = -1;
	printf("%d\n", ch1 = ch1 << 2);
	printf("%d\n", ch2 = ch2 << 1);
	system("pause");
}