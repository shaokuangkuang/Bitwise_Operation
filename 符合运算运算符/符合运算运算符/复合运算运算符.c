#include <stdio.h>

void main1()
{
	unsigned char ch = 4;
	ch <<= 1;//µÈ¼ÛÓÚch = ch<<1
	printf("%d\n", ch);
	getchar();
}

void main2()
{
	unsigned char ch = 4;
	ch >>= 1;
	printf("%d\n", ch);
	getchar();
}

void main3()
{
	unsigned char ch = 4;
	ch |= 1;  //ch = ch | 1
	printf("%d\n", ch);
	getchar();
}

void main4()
{
	unsigned char ch = 4;
	ch &= 1;  //ch = ch & 1
	printf("%d\n", ch);
	getchar();
}

void main5()
{
	unsigned char ch = 4;
	ch ^= 1;  //ch = ch ^ 1
	printf("%d\n", ch);
	getchar();
}

void main()
{
	unsigned char ch = 4;
	ch = ~ch;  //ch = ch ^ 1
	printf("%d\n", ch);
	getchar();
}