#include <stdio.h>
#include <stdlib.h>

//��Լ�ڴ棬Ƕ��ʽ�������豸��������Ҫ��Լ�ڴ�
//struct date
//{
//	unsigned int day;//4���ֽ� 
//	unsigned int month;
//	unsigned int year;
//};//��Ҫ�ķ�12���ֽ��ڴ棬�ܶೡ���ò���

//λ�ֶΡ����޶��ṹ��ĳ�������ù̶��Ķ�����

struct date
{//ռ4���ֽڣ�32λ����Լ���ڴ�
	unsigned int day : 5;//�޶�������5��������λ
						 //1111 1000
	unsigned int month : 4;//1111 0000
	unsigned int year : 14;
	//1111 1111
	//1111 1100
	//CPU�����ֽ���Ѱַ����������һ���ֽ���Ѱַ����С��λ
	//�����ڽṹ�壬������������λ���Ľṹ-λ��
};

void main()
{
	struct date date1, *pdate;
	date1.day = 31;
	date1.month = 9;
	date1.year = 2014;

	pdate = (struct date*)malloc(sizeof(struct date));
	//ָ����Ҫ�����ڴ棬�����ָ�����͵�ת��
	//
	printf("%d\n", sizeof(struct date));
	pdate->day = 1;
	pdate->month = 12;
	pdate->year = 2014;
	printf("%d,%d,%d\n", date1.day, date1.month, date1.year);
	printf("%d,%d,%d\n", pdate->day, date1.month,date1.year);
	getchar();
}