#include <stdio.h>
#include <stdlib.h>
void main()
{
	float fl;
	scanf_s("%f", &fl);
	printf("%p\n", &fl);
	unsigned char *p = (unsigned char*)&fl;//共享内存
	for (int i = 3; i >= 0; i--) {//需要逆向输出
		unsigned char chs = p[i];//按照字节取出数据
		//按照unsigned char类型解析数据
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