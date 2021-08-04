#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//int my_strlen(const char *ch)
//{
//	assert(ch);
//	int count = 0;
//	while (*ch++)
//	{
//		count++;
//	}
//	return count;
//
//}
//
//int main()
//{
//	char ch[10] = "abcde";
//	int sz = my_strlen(ch);
//	printf("%d\n", sz);
//	
//	return 0;
//}

//void my_strcpy(const char* source, char* dest)
//{
//	assert(source);
//	assert(dest);
//	while (*dest++ = *source++)
//	{
//		;
//	}
//
//}
//
//int main()
//{
//	char ch[10] = "abcde";
//	char ch1[10] = { 0 };
//	/*int sz = my_strlen(ch);
//	printf("%d\n", sz);*/
//	my_strcpy(ch, ch1);
//	for (int i = 0; i < 10; i++)
//		printf("%c", ch1[i]);
//
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	char gender[10];
//	int age;
//}s1;

//typedef struct stu
//{
//	char name[20];
//	char gender[10];
//	int age;
//}stu;
//
////struct stu
////{
////	char name[20];
////	char gender[10];
////	int age;
////};
//
//void print1(struct stu s)
//{
//	printf("%s\n", s.name);
//}
//
//void print2(struct stu* s)
//{
//	printf("%s\n", s->name);
//}
//
//int main()
//{
//	struct stu s = { "hahaha","man",20 };
//	stu s2 = { "lalala","women",18 };
//	/*printf("%s ", s.name);
//	printf("%s ", s.gender);
//	printf("%d ", s.age);*/
//	print1(s);
//	print2(&s);
//
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*******************************\n");
	printf("********    1.play     ********\n");
	printf("********    0.exit     ********\n");
	printf("*******************************\n");

}

void game()
{
	int ret = rand()%100+1;
	int guess = 0;
	//printf("%d\n", ret);

	while (1)
	{
		printf("输入你猜的数：");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了！\n");
		else if (guess < ret)
			printf("猜小了！\n");
		else
		{
			printf("猜中了！\n");
			break;
		}
	}

}

int main()
{
	srand((unsigned)time(NULL));
	int input=0;
	do
	{
		menu();
		printf("请输入：");
		scanf("%d ", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏！\n");
				break;
			default:
				printf("输入错误\n");
				break;
		}	
	} while (input);

	return 0;
}
