#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
/*-------------------------------------�ַ�������---------------------------------------------------*/
//strcpy��ʵ��
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while ((*dest++ = *src++))//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hij";
//	//strcpy(arr1, arr2);//ע�ⷵ�ص����޷�������
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//strncpy
//char* my_strncpy(char* dest, const char* src, int num)
//{
//	assert(dest && src);
//	while (num && (*dest++ = *src++))
//	{
//		num--;
//	}
//	if (num)
//	{
//		while (--num)
//		{
//			*dest++ = '\0';
//		}
//	}
//
//}
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "qwer";
//	//strncpy(arr1, arr2, 6);//�������ַ�������Դ�ַ���ʱ�Ჹ'\0'
//	my_strncpy(arr1, arr2, 6);
//	printf("%s", arr1);
//	return 0;
//}

//strcat->׷���ַ���
//char* my_strcat(char* dest, const char* src) 
//{
//	char* ret = dest;
//	assert(dest && src);
//	//�ҵ�Ŀ���ַ���'\0'
//	while (*dest) 
//	{
//		dest++;
//	}
//	//׷��
//	while (*dest++ = *src++) 
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[50] = "hello";
//	char arr2[] = "world";
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//strcmp->�ַ����Ƚ�
//int my_strcmp(const char* str1, const char* str2) 
//{
//	assert(str1 && str2);
//	while (*str1 == *str2) 
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1) - (*str2);
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "q";
//	//int ret = strcmp(p1, p2);//�ȽϵĲ����ַ����ĳ��ȣ������ַ��Ĵ�С
//	int ret = my_strcmp(p1, p2);
//	printf("ret= %d\n", ret);
//	return 0;
//}

//strstr->�������ַ���
//char* my_strstr(const char* p1, const char* p2) 
//{
//	assert(p1 && p2);
//	char* s1;
//	char* s2;
//	char* cur = (char*)p1;
//	while (*cur) 
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && s2 && (*s1 == *s2)) 
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cur;
//		if (*s1 == '\0')
//			return NULL;
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char* p1 = "abbbcdef";
//	const char* p2 = "bbc";
//	//char* ret = strstr(p1, p2);//����ҵ��˾ͷ���d�ĵ�ַ���Ҳ�������NULL
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//		printf("�ִ�������\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//strtok����
//����1361095499@qq.com
//���1361095499 qq com
//int main()
//{
//	char arr[] = "1361095499@qq.com";
//	char* p = "@.";
//	/*char* ret1 = strtok(arr, p);
//	char* ret2 = strtok(NULL, p);
//	char* ret3 = strtok(NULL, p);
//	printf("%s %s %s", ret1,ret2,ret3);*/
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p)) 
//	{
//		printf("%s ", ret);
//	}
//	return 0;
//}

//strerror->���ش����룬��Ӧ�Ĵ�����Ϣ
//#include <errno.h>
//int main()
//{
//	//������ ������Ϣ
//	//0--    No error
//	//1--    Operation not permitted
//	//2--    No such file or directory
//	//...
//	//char* str = strerror(2);
//	/*char* str = strerror(errno);
//	printf("%s\n", str);*/
//	//errno��һ��ȫ�ֵĴ��������
//	// ��c���Կ⺯������ִ�й����з����˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//		printf("%s\n", strerror(errno));
//	else
//		printf("open file success\n");
//	return 0;
//}

/*-------------------------------------�ڴ溯��---------------------------------------------------*/
//memcpy->����ʵ�������������ݵĿ���->���source��destination���κε��ص������ƵĽ������δ�����
//void* my_memcpy(void* dest, const void* src, size_t num) 
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--) 
//	{
//		*((char*)dest)++ = *((char*)src)++;
//		/*++(char*)dest;
//		++(char*)src;*/
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	int i = 0;
//	//memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	for (i = 0; i < 5; i++) 
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//memmove->���Դ����ڴ��ص������
//void* my_memmove(void* dest, const void* src, size_t num) 
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest > src) //�Ӻ���ǰ����
//	{
//		while (num--) 
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//		return dest;
//	}
//	else //��ǰ��󿽱�
//	{
//		while (num--)
//		{
//			*((char*)dest)++ = *((char*)src)++;
//			/*++(char*)dest;
//			++(char*)src;*/
//		}
//		return ret;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	//��0123������2345��λ����ȥ
//	//memmove(arr + 2, arr, 16);
//	my_memmove(arr, arr+3, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//memcmp->�Ƚ��������͵�����
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//memset->�ڴ�����
//int main()
//{
//	//char arr[10] = "";
//	//memset(arr,'#',10);//����������ȫ���ĳ�#
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);//ע�ⵥλ���ֽ�
//	return 0;
//}