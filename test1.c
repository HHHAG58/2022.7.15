#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结构体自引用
//指针
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//int main()
//{
//
//	return 0;
//}

//结构体的使用
//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello world" };
//	struct S s = { 'c',{55.6,30},100,3.14,"hello world" };
//	printf("%c %d %if %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//
//	return 0;
//}

//计算结构体大小
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//
//	return 0;
//}

//设置默认对齐数位4
#pragma pack(4)
struct S
{
	char c1;
	double d;
};
#pragma pack()

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));

	return 0;
}