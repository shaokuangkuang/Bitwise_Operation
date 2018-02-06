#include <stdio.h>
#include <stdlib.h>

//求二进制中有多少个一
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