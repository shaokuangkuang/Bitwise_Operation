#include <stdio.h>

int main()
{
	unsigned char ch1 = 168, ch2 = 133;
	unsigned char ch3 = ~ch1, ch4 = ~ch2;
	unsigned char ch5 = -169, ch6= -134;
	printf("%d,%d\n", ch3, ch4);
	printf("%d,%d\n", ~ch1, ~ch2);
	printf("%d,%d\n", ch1, ch2);
	printf("%d,%d\n", ch5, ch6);
	system("pause");
	return 0;


}