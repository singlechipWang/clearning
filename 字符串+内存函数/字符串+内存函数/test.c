#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
/*-------------------------------------字符串函数---------------------------------------------------*/
//strcpy的实现
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while ((*dest++ = *src++))//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hij";
//	//strcpy(arr1, arr2);//注意返回的是无符号整型
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
//	//strncpy(arr1, arr2, 6);//拷贝的字符数大于源字符数时会补'\0'
//	my_strncpy(arr1, arr2, 6);
//	printf("%s", arr1);
//	return 0;
//}

//strcat->追加字符串
//char* my_strcat(char* dest, const char* src) 
//{
//	char* ret = dest;
//	assert(dest && src);
//	//找到目的字符串'\0'
//	while (*dest) 
//	{
//		dest++;
//	}
//	//追加
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

//strcmp->字符串比较
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
//	//int ret = strcmp(p1, p2);//比较的不是字符串的长度，而是字符的大小
//	int ret = my_strcmp(p1, p2);
//	printf("ret= %d\n", ret);
//	return 0;
//}

//strstr->查找子字符串
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
//	//char* ret = strstr(p1, p2);//如过找到了就返回d的地址，找不到返回NULL
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//		printf("字串不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//strtok函数
//输入1361095499@qq.com
//输出1361095499 qq com
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

//strerror->返回错误码，对应的错误信息
//#include <errno.h>
//int main()
//{
//	//错误码 错误信息
//	//0--    No error
//	//1--    Operation not permitted
//	//2--    No such file or directory
//	//...
//	//char* str = strerror(2);
//	/*char* str = strerror(errno);
//	printf("%s\n", str);*/
//	//errno是一个全局的错误码变量
//	// 当c语言库函数正在执行过程中发生了错误，就会把对应的错误码赋值到errno中
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//		printf("%s\n", strerror(errno));
//	else
//		printf("open file success\n");
//	return 0;
//}

/*-------------------------------------内存函数---------------------------------------------------*/
//memcpy->可以实现任意类型数据的拷贝->如果source和destination有任何的重叠，复制的结果都是未定义的
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

//memmove->可以处理内存重叠的情况
//void* my_memmove(void* dest, const void* src, size_t num) 
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest > src) //从后向前拷贝
//	{
//		while (num--) 
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//		return dest;
//	}
//	else //从前向后拷贝
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
//	//把0123拷贝到2345的位置上去
//	//memmove(arr + 2, arr, 16);
//	my_memmove(arr, arr+3, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//memcmp->比较任意类型的数据
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//memset->内存设置
//int main()
//{
//	//char arr[10] = "";
//	//memset(arr,'#',10);//把数组内容全部改成#
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);//注意单位是字节
//	return 0;
//}