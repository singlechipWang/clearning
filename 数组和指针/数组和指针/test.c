#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#define N_VALUES 5

/*------------------------һά����------------------------*/
//int main() 
//{
//	int arr1[5] = {0,1,2};//����ȫ��ʼ��,�����Զ���0
//	char arr2[3] = {'a','b'};
//	char arr3[3] = "ab";
//
//	printf("%d\n",sizeof(arr3));//3,��ռ��С,��\0
//	printf("%d\n",strlen(arr3));//2,���ַ�������,����\0
//	return 0;
//}

//int main() 
//{
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n",sizeof(arr1));//3
//	printf("%d\n", sizeof(arr2));//4
//	printf("%d\n", strlen(arr1));//����
//	printf("%d\n", strlen(arr2));//3
//	return 0;
//}

//�������
//int main() 
//{
	//char arr1[] = "abcdef";//[a][b][c][d][e][f][\0]
	//printf("%c\n",arr1[3]);
	//int i = 0;
	//for (; i < (int)strlen(arr1); i++)//strlen���ص����޷�����
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

//����ĵ�ַ
//int main() 
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) 
//	{
//		printf("&arr[%d]= %p\n",i,&arr[i]);//�������ڴ����������
//	}
//	return 0;
//}

/*-------------------------------��ά����------------------------*/
//�������ʼ��
//int main() 
//{
//	int arr[3][4] = { 0,1,2,3,4 };//�ȷ�����һ��
//	int arr1[3][4] = { {0,1,2,},{3,4} };
//	//char ch[5][4];
//	int arr2[3][] = { {0,1,2},{3,4,5} };//��ά�����в���ʡ��
//	return 0;
//}

//��ά����ķ���
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

//��ά�������ڴ��еĴ洢
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
			printf("&arr[%d[%d] = %p\n ",i,j, &arr[i][j]);//�����洢����һά����һ��
		}
	}
	return 0;
}

//int values[N_VALUES];
//int main()
//{
//    int* vp;
//     vp = &values[N_VALUES];//���������±�Ϊ5�ĵ�ַ
//    
//     for(vp=&values[N_VALUES];vp>&values[0];)
//     {
//         *--vp=0;
//     }
//     //for (vp = &values[N_VALUES - 1]; vp >= values[0]; vp--) //����Խ�磬����д��
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
//	//��������������Ԫ�صĵ�ַ
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
//	printf("%d\n",2[arr]);//[]��һ�������� 2��arr������������
//	printf("%d\n",p[2]);
//	printf("%d\n",2[p]);
//	return 0;
//}

/*-------------------------------����ָ��--------------------------------*/
//int main() 
//{
//	int a = 0;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	int **ppa=&pa;//ppa�Ƕ���ָ�����
//	**ppa = 10;//ͨ������ָ������÷���a
//	printf("%d\n",a);
//	return 0;
//}

/*-----------------------------ָ������----------------------------------------------*/

//int main() 
//{
//	int arr[10];//�������飬������ε�����
//	char ch[3];//�ַ����飬����ַ�������
//	int* parr[5];//����ָ�����飬�������ָ�������
//
//	return 0;
//
//}



