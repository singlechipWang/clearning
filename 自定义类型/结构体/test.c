#define _CRT_SECURE_NO_WARNINGS 1
/*-------------------------------�ṹ���ڴ����-------------------------------------*/
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

//#pragma���Ըı�Ĭ�϶�����
//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//struct S1 
//{
//	char c;
//	double d;
//};
//#pragma pack()//ȡ������
//int main()
//{
//	struct S1 s1 = { 0 };
//	//printf("%d\n", sizeof(s1));//16
//	printf("%d\n", sizeof(s1));//12
//	return 0;
//}

//offsetof->����ṹ���Ա����ڽṹ����ʼλ�õ�ƫ�����Ƕ���
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

/*----------------------------------λ��-------------------------------------------*/
//1.λ�εĳ�Ա������ int��unsigned int ��signed int ��
//2.λ�εĳ�Ա�������һ��ð�ź�һ�����֡�

//λ��->λָ���Ƕ�����λ
//struct S 
//{
//	int a : 2;//aֻ��Ҫ����bitλ
//	int b : 5;//��b������5��bitλ
//	int c : 10;
//	int d : 30;
//};
////һ��47��bit
//int main()
//{
//	struct S s;
//	printf("%zd\n", sizeof(s));
//	return 0;
//}

/*--------------------------------------ö��----------------------------------------*/
//enum Sex 
//{
//	MALE,//0,���Ը���ֵ�������������ﲻ�ܸ���
//	FEMALE,//1
//	SECRET//2
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}

/*------------------------------------������-------------------------------------------*/
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
//	printf("%p\n", &u);//������ַ����ͬ������һ��ռ䣬����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//�жϵ�ǰƽ̨�洢������С�˻��Ǵ��
//����д���Ĵ���
//int judgement() 
//{
//	int a = 1;
//	//00 00 00 01
//	//С�˴洢Ӧ����01 00 00 00 
//	//��˴洢Ӧ����00 00 00 01����ֻ���жϵ�һ���ֽ��Ƿ�λ1 
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
//		printf("С�˴洢\n");
//	}
//	else
//		printf("��˴洢\n");
//	return 0;
//}

//Ҳ�������������������ʵ��
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
//		printf("С�˴洢\n");
//	}
//	else
//		printf("��˴洢\n");
//	return 0;
//}

