#define _CRT_SECURE_NO_WARNINGS 1
/*-------------------------------结构体内存对齐-------------------------------------*/
#include <stdio.h>
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
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

//#pragma可以改变默认对齐数
//#pragma pack(4)//设置默认对齐数为4
//struct S1 
//{
//	char c;
//	double d;
//};
//#pragma pack()//取消设置
//int main()
//{
//	struct S1 s1 = { 0 };
//	//printf("%d\n", sizeof(s1));//16
//	printf("%d\n", sizeof(s1));//12
//	return 0;
//}

//offsetof->计算结构体成员相对于结构体起始位置的偏移量是多少
//#include <stddef.h>
//struct S
//{
//	char c;
//	int a;
//	double d;
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, a));//4
//	printf("%d\n", offsetof(struct S, d));//8
//	return 0;
//}

/*----------------------------------位段-------------------------------------------*/
//1.位段的成员必须是 int、unsigned int 或signed int 。
//2.位段的成员名后边有一个冒号和一个数字。

//位段->位指的是二进制位
//struct S 
//{
//	int a : 2;//a只需要两个bit位
//	int b : 5;//给b分配了5个bit位
//	int c : 10;
//	int d : 30;
//};
////一共47个bit
//int main()
//{
//	struct S s;
//	printf("%zd\n", sizeof(s));
//	return 0;
//}

/*--------------------------------------枚举----------------------------------------*/
//enum Sex 
//{
//	MALE,//0,可以赋初值，但是主函数里不能更改
//	FEMALE,//1
//	SECRET//2
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}

/*------------------------------------联合体-------------------------------------------*/
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%zd\n", sizeof(u));//4
//
//	printf("%p\n", &u);//三个地址都相同，共用一块空间，这样一个联合变量的大小，至少是最大成员的大小
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//判断当前平台存储数据是小端还是大端
//曾经写过的代码
//int judgement() 
//{
//	int a = 1;
//	//00 00 00 01
//	//小端存储应该是01 00 00 00 
//	//大端存储应该是00 00 00 01，故只需判断第一个字节是否位1 
//	if (*(char*)pa == 0x01)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//
//	int ret = judgement();
//	if (ret == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//		printf("大端存储\n");
//	return 0;
//}

//也可以用联合体来巧妙的实现
//int judgement() 
//{
//	union Un
//	{
//		char a;
//		int b;
//	}u;
//	u.b = 1;
//
//	return u.a;
//}
//int main()
//{
//
//	int ret = judgement();
//	if (ret == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//		printf("大端存储\n");
//	return 0;
//}

