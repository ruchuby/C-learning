#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//具有 相同类型 的 若干变量 按有序形式组织起来
//注意是相同类型的

void func_03()
{
	//数据类型 名[个数] = {值1， 2， 3...}
	int arr[] = { 1,3,5,7 }; //自动计算为4个
	//int arr[10] = { 1 }; //不完全初始化（其他的值会初始化为0）

	//若没有任何初始化或者赋值，则是乱码（赋值不会给其他的进行初始化）

	//此外初始化中长度值 必须是常量 或者 常量表达式
	//因此数组大小是固定的（除非动态数组--开辟堆空间）


	int len = sizeof(arr) / sizeof(arr[0]); //利用sizeof计算长度
	
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
		//空格或换行都可以进行下一步循环
	}
	
	for (int i=0;i< len;i++)
	{
		printf("%d\n", arr[i]);
	}
	//在内存中存储方式和大小
	/*
	元素间地址差4（地址是连续的，但每个元素占4B，打印的是首个字节的地址）
	
	数组名 是一个指向 首个元素 的地址常量
	*/


	//数组下标越界
	/*
	当下标超过了，会自动往下的地址进行读值
	若下标为负数，就往前的地址进行读值
	*/
}