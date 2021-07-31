#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>


//int main()
//{
//    /*int arr[] = { 1,2,3,4,5 };
//    int* pa = arr;
//    for (int i = 0; i < 5; i++)
//        printf("%d ", *(pa + i));*/
//
//    int a = 0;
//    int b = 0;
//    int sum = 0;
//    scanf("%d", &a);
//    for (int i = 0; i < 5; i++)
//    {
//        b = b * 10 + a;
//        sum = sum + b;
//    }
//    printf("sum=%d\n", sum);
//
//    return 0;
//}

int main()
{
	for (int i = 0; i < 100000; i++)
	{
		int count = 1;
		int temp = i;
		int sum = 0;
		while (temp / 10)
		{
			count++;
			temp = temp / 10;
		}
		temp = i;
		while (temp)
		{
			sum = sum+pow(temp % 10, count);
			temp = temp / 10;
		}
		if (i == sum)
			printf("%d ", i);
	}

	return 0;
}