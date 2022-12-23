#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//冒泡排序法的时间复杂度
//精确:F(N)=N(N-1)/2->时间复杂度:O(N^2)
//算时间复杂度不能只看代码是几层循环，而是要去看他的思想

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

//二分查找最好情况是O(1),最坏情况是O(log2n)，效率很高但是只能查找已排好序的数字
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
			printf("找到了，下标是:%d\n",mid);
			break;
		}
	}
	if (left > right) 
	{
		printf("找不到\n");
	}
	return 0;
}