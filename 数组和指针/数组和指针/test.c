#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#define N_VALUES 5

/*------------------------一维数组------------------------*/
//int main() 
//{
//	int arr1[5] = {0,1,2};//不完全初始化,后面自动补0
//	char arr2[3] = {'a','b'};
//	char arr3[3] = "ab";
//
//	printf("%d\n",sizeof(arr3));//3,求空间大小,算\0
//	printf("%d\n",strlen(arr3));//2,求字符串长度,不算\0
//	return 0;
//}

//int main() 
//{
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n",sizeof(arr1));//3
//	printf("%d\n", sizeof(arr2));//4
//	printf("%d\n", strlen(arr1));//乱码
//	printf("%d\n", strlen(arr2));//3
//	return 0;
//}

//数组访问
//int main() 
//{
	//char arr1[] = "abcdef";//[a][b][c][d][e][f][\0]
	//printf("%c\n",arr1[3]);
	//int i = 0;
	//for (; i < (int)strlen(arr1); i++)//strlen返回的是无符号型
	//{
	//	printf("%c",arr1[i]);
	//}
//	int arr[] = {0,1,2,3,4};
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}

//数组的地址
//int main() 
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) 
//	{
//		printf("&arr[%d]= %p\n",i,&arr[i]);//数组在内存中连续存放
//	}
//	return 0;
//}

/*-------------------------------二维数组------------------------*/
//创建与初始化
//int main() 
//{
//	int arr[3][4] = { 0,1,2,3,4 };//先放满第一行
//	int arr1[3][4] = { {0,1,2,},{3,4} };
//	//char ch[5][4];
//	int arr2[3][] = { {0,1,2},{3,4,5} };//二维数组列不能省略
//	return 0;
//}

//二维数组的访问
//int main() 
//{
//	int arr[3][4] = { {0,1,2,3},{4,5},6 };
//	//0 1 2 3
//	//4 5 0 0
//	//6 0 0 0
//	int i;
//	for (i = 0; i < 3; i++) 
//	{
//		int j;
//		for (j = 0; j < 4; j++) 
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二维数组在内存中的存储
int main()
{
	int arr[3][4] = { {0,1,2,3},{4,5},6 };
	//0 1 2 3
	//4 5 0 0
	//6 0 0 0
	int i;
	for (i = 0; i < 3; i++)
	{
		int j;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d[%d] = %p\n ",i,j, &arr[i][j]);//连续存储，与一维数组一样
		}
	}
	return 0;
}

//int values[N_VALUES];
//int main()
//{
//    int* vp;
//     vp = &values[N_VALUES];//代表数组下标为5的地址
//    
//     for(vp=&values[N_VALUES];vp>&values[0];)
//     {
//         *--vp=0;
//     }
//     //for (vp = &values[N_VALUES - 1]; vp >= values[0]; vp--) //访问越界，错误写法
//     //{
//     //    *vp = 0;
//     //}
//     printf("vp=%p\n", vp);
//     printf("%p\n", values);
//    return 0;
//}
//
//int arr[10] = {0};
//
//int main() 
//{
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		*(p+i)= i;	
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	//数组名是数组首元素的地址
//	/*printf("%p\n",&arr[0]);
//	printf("%p\n",arr);*/
//	return 0;
//}

//int main() 
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int *p=arr;
//	//arr[2]<==>*(p+2)<==>*(2+p)<==>(*2+arr) == 2[arr]
//	printf("%d\n",arr[2]);
//	printf("%d\n",2[arr]);//[]是一个操作符 2和arr是两个操作数
//	printf("%d\n",p[2]);
//	printf("%d\n",2[p]);
//	return 0;
//}

/*-------------------------------二级指针--------------------------------*/
//int main() 
//{
//	int a = 0;
//	int* pa = &a;//pa是指针变量，一级指针
//	int **ppa=&pa;//ppa是二级指针变量
//	**ppa = 10;//通过二级指针解引用访问a
//	printf("%d\n",a);
//	return 0;
//}

/*-----------------------------指针数组----------------------------------------------*/

//int main() 
//{
//	int arr[10];//整形数组，存放整形的数组
//	char ch[3];//字符数组，存放字符的数组
//	int* parr[5];//整形指针数组，存放整形指针的数组
//
//	return 0;
//
//}



