#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct Stu 
//{
//	char name[20];
//	char ID[20];
//	int age;
//	char sex[10];
//};
//
//int main() 
//{
//	struct Stu stu = {"С��","123456",24,"��"};//�ṹ�����
//	printf("%s %s %d %s\n",stu.name,stu.ID,stu.age,stu.sex);
//	struct Stu *ps=&stu;
//	printf("%s %s %d %s\n", ps->name,ps->ID,ps->age,ps->sex);//�ṹ��ָ��ķ���
//	return 0;
//}

/*---------------------------�ṹ�崫��---------------------------------*/

//struct B
//{
//	char a;
//	int b;
//	float c;
//};
//struct Stu 
//{
//	struct B b;
//	char name[20];
//	char ID[20];
//	int age;
//	char sex[10];
//};
//void print1(struct Stu s)
//{
//	printf(" % c % d % lf % s % s % d % s\n",s.b.a,s.b.b,s.b.c,s.name,s.ID,s.age,s.sex);
//}
//void print2(struct Stu* ps) 
//{
//	printf(" % c % d % lf % s % s % d % s\n", ps->b.a,ps->b.b,ps->b.c,ps->name,ps->ID,ps->age,ps->sex);
//}
//int main() 
//{
//	struct Stu stu = { {'w',20,3.14},"С��","123456",24,"��" };
//	//дһ��������ӡstu������
//	print1(stu);//��ֵ����
//	print2(&stu);//��ַ����
//	return 0;
//}

//�ṹ����ڴ����
//typedef struct Stu 
//{
//	char a;
//	int b;
//	char c;
//}s;
//int main()
//{
//	s* sa;
//	sa->a = 'a';
//	sa->b = 1;
//	printf("%c %d %c",sa->a,sa->b,sa->c);
//	return 0;
//}

/*------------------------------�ṹ������------------------*/

//typedef struct Stu 
//{
//	char name[10];
//	int age;
//	char sex[10];
//}stu;
//void OutPut(stu a[],int n)
//{
//	int i = 0;
//	for (; i < 2;i++) 
//	{
//		printf("����:%s ����:%d �Ա�:%s \n",a[i].name,a[i].age,a[i].sex);
//	}
//}
//int main() 
//{
//	stu a[2] = { {"xiaohua",20,"��"},
//		         {"xiaowang",21,"Ů" }
//	           };
//
//	OutPut(a,2);
//	return 0;
//}

/*--------------------------------ucos��ϰ-------------------------------*/

typedef struct B 
{
	int a;
	char c[10];
	float d;
}b;
typedef struct Stu 
{
	b* head;
	b* tail;
}s;
int main() 
{
	s a[2];
	printf("%d",a[0].head->a);
	return 0;
}