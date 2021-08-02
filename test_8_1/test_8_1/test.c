#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		static int a = 0;
//		a++;
//		printf("%d ", a);
//	}
//
//	return 0;
//}

//extern a;
//
//int main()
//{
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	/*int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;*/
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}

//void Reverse(char* p, int x)
//{
//    int left = 0;
//    int right = x - 1;
//    while (left <= right)
//    {
//        char temp = '0';
//        temp = p[left];
//        p[left] = p[right];
//        p[right] = temp;
//        left++;
//        right--;
//    }
//    for (int i = 0; i < x; i++)
//        printf("%c", p[i]);
//}
//
//int main()
//{
//    char arr[20] = "I am a student";
//    int sz = strlen(arr);
//    Reverse(arr, sz);
//
//    return 0;
//}

//int main()
//{
//	int line = 7;
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < line - i-1; j++)
//			printf(" ");
//		for (int j = 0; j < 2*i + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (int i = 0; i < line - 1; i++)
//	{
//		for(int j=0;j<=i;j++)
//			printf(" ");
//		for(int j=0;j<2*(line-1-i)-1;j++)
//			printf("*");
//		printf("\n");
//	}
//
//	return 0;
//}

int main()
{
	int count = 0;
	int fee = 20;
	int empty = 0;

	count = fee;
	empty = fee;
	while (empty > 1)
	{
		count = count + empty / 2;
		empty = empty / 2+empty % 2;
	}
	printf("%d\n", count);

	return 0;
}