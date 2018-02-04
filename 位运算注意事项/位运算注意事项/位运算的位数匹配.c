#include <stdio.h>
#include <stdlib.h>

void main()
{
	unsigned char ch = 12;//1个字节
	unsigned int num = 123;//4个字节
	printf("%d\n", ch&num);//会自动进行数据类型的转换
	printf("%d,%d,%d\n", sizeof(ch), sizeof(num), sizeof(ch&num));
	//ch&num自动完成数据类型转换

	//无符号的数据类型或者有符号正数，进行位运算的时候，需要自动进行转换
	//低字节向高字节转换的时候，会自动填充0


	system("pause");
}
//计算内部都是按补码保存数据
//有符号负数在进行位运算的时候，需要自动进行转换，
//低字节向高字节转换的时候，正数会自动填充位符号位会自动填充0，
//负数会自动填充1
//也就是符号位
void main()
{
	char ch = -1;
	int num = -3;
	printf("%p,%p\n", &ch, &num);
	printf("%d\n", ch&num);
	printf("%d,%d,%d\n", sizeof(ch), sizeof(num), sizeof(ch&num));
	system("pause");
}

 