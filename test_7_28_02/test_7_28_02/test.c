#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int Max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

void Init(int* arr, int a)  //数组初始化
{
	for (int i = 0; i < a; i++)
		arr[i] = 0;
}

void print(int *arr,int a)  //打印数组
{
	for (int i = 0; i < a; i++)
		printf("%d ", arr[i]);
}

void reverse(int* arr, int a)  //数组逆置
{
	int left = 0;
	int right = a - 1;
	int ret = 0;
	while (left <= right)
	{
		ret = arr[left];
		arr[left] = arr[right];
		arr[right] = ret;
		left++;
		right--;
	}
	for (int i = 0; i < a; i++)
		printf("%d ", arr[i]);
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	//Init(arr, size);
	//print(arr,size);
	reverse(arr, size);

	return 0;
}

void a()
{
	//char ch1[] = "abc" ;
	//char ch2[] = { 'a','b','c' };

	//printf("%s\n", ch1);
	//printf("%s\n", ch2);

	//int len1 = strlen(ch1);   //字符串结束的标志是 \0，\0不算大小
	//int len2 = strlen(ch2);
	//printf("%d\n", len1);
	//printf("%d\n", len2);

	//printf("\a\a\a\a");   //警报，电脑会响一下

	//char ch3[10] = "hello bit";

	/*int n = 10;
	int arr[n] = { 0 };*/

	//求两数的最大值
	/*int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("max=%d\n", Max(a, b));*/


}