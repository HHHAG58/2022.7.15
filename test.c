#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//ǰ->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	/*int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));*/
//
//	//�ص�����
//	// �Լ�д�ĺ���Ŀǰ�޷�����
//				// 1 2 1 2 3 4 5 8 9 10
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memcpy(arr3 + 2, arr3, 20);
//
//	//memmove����ʤ���ڴ���ص�����
//	my_memmove(arr3 + 2, arr3, 20);
//	return 0;
//
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//
//	return 0;
//}

//memset - �ڴ�����
//int main()
//{
//	/*char arr[10] = "";
//	memset(arr, '#', 10);*/
//
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);
//
//	return 0;
//}