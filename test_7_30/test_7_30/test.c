#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int count = 0;
//    scanf("%d%d", &a, &b);
//    c = a ^ b;
//    for (int i = 0; i < 32; i++)
//    {
//        if ((c & (1 << i)) == (1 << i))
//            count++;
//    }
//    printf("%d\n", count);
//
//
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < 32; i += 2)  //打印奇数位，从第一位开始
//	{
//		b = (a>>i) & 1 ;    //a与1 按位与，再右移两个单位
//		printf("%d ",b);
//	}
//	printf("\n");
//	for (int i = 0; i < 32; i += 2)
//	{
//		b = (a>>(i+1)) & 1 ;
//		printf("%d ", b);
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	printf("二进制表示中1的个数为：%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 3;
//
//	/*a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d", a, b);*/
//
//	b = a ^ b;
//	a = a ^ b;
//	b = a ^ b;
//	printf("a=%d b=%d", a, b);
//
//	return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);  //a为行数，b为列数
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    for (int i = 0; i < a; i++)
//        for (int j = 0; j < b; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//            arr2[j][i] = arr1[i][j];
//        }
//    for (int j = 0; j < b; j++)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            printf("%d ", arr2[j][i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//int main()
//{
//    char a = '0';
//    while (~scanf("%c", &a))
//    {
//        getchar();
//        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
//            printf("Vowel\n");
//        else
//            printf("Consonant\n");
//    }
//
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int ret = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (b > c)
//			printf("%d %d %d\n", a, b, c);
//		else if (b < c)
//		{
//			if(a>c)
//				printf("%d %d %d\n", a, c, b);
//			else
//				printf("%d %d %d\n", c, a, b);
//		}
//	}
//	if (a < b)
//	{
//		if(b<c)
//			printf("%d %d %d\n", c, b, a);
//		else if (b > c)
//		{
//			if (a > c)
//				printf("%d %d %d\n", b, a, c);
//			else
//				printf("%d %d %d\n", b, c, a);
//		}
//	}
//
//	return 0;
//}

int main()
{
	for (int i = 3; i < 100; i += 3)
		printf("%d ", i);

	return 0;
}