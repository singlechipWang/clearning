#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//ð�����򷨵�ʱ�临�Ӷ�
//��ȷ:F(N)=N(N-1)/2->ʱ�临�Ӷ�:O(N^2)
//��ʱ�临�ӶȲ���ֻ�������Ǽ���ѭ��������Ҫȥ������˼��

//int main(void)
//{
//    int a[10] = { 6,4,3,2,7,8,9,10,1,5 };
//    for (int i = 0; i < 9; i++)
//    {
//        for (int j = 0; j < 9 - i; j++)
//        {
//            if (a[j] > a[j + 1])
//            {
//                int t;
//                t = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = t;
//            }
//        }
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", a[i]);
//    }
//}

//���ֲ�����������O(1),������O(log2n)��Ч�ʺܸߵ���ֻ�ܲ������ź��������
int main(void) 
{
	int arr[10] = { 1,2,3,4,5,6,8,9,10 };
	int k = 7;
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left <= right) 
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k) 
		{
			left = mid + 1;
		}
		else if (arr[mid] > k) 
		{
			right = mid - 1;
		}
		else 
		{
			printf("�ҵ��ˣ��±���:%d\n",mid);
			break;
		}
	}
	if (left > right) 
	{
		printf("�Ҳ���\n");
	}
	return 0;
}