#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

//int main()
//{
// //c语言提供了一个函数：system()- 执行系统命令的
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");
//
//	while(1)
//	{
//		printf("请注意你的电脑将在一分钟内关机,请输入“我是猪”，停止关机！！！\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}return 0;
//}//关机


//int main()
//{
//	//c语言提供了一个函数：system()- 执行系统命令的
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");
//
//again:
//		printf("请注意你的电脑将在一分钟内关机,请输入“我是猪”，停止关机！！！\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//		}
//		else
//		{
//			goto again;
//	}return 0;
//}//关机


//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);//memset(指针或数组，付给buffer的值，buffer的长度)
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);//
//	printf("%s", arr1);
//
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//1.被4整除，不能被100整除是闰年
//		//2.能被四百整除
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//1.被4整除，不能被100整除是闰年
//		//2.能被四百整除
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i；看能不能整除
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);//素数
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)//sqrt是开平方的函数
//	{	//m=a*b
//		//a,b中至少有一个数是小于等于m开平方
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i；看能不能整除
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);//素数
//		}
//	}
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//返回z—返回较大值
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);//括号里面可以是常量，函数，变量，表达式
//
//	printf("max=%d\n", max);
//	return 0;
//}//让get_max帮做事



//void Swap(int x,int y)//函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
//{
//	int z = 0;
//	z = x;
//	x = y;//传值调用？
//	y = z;//改变形参，实参不受影响
//}//写出问题x，y也开辟了新空间
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("前：a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("后：a=%d b=%d\n", a, b);
//	return 0;
//}//交换两个变量的值



//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量
//	*pa = 30;
//	printf("%d\n", a);
//	return 0;
//}


//void Swap(int* pa, int* pb)//函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;//传址调用？
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("后：a=%d b=%d\n", a, b);
//	return 0;
//}


//int is_prime(int a)
//{
//	int b = 0;
//	for (b = 2; b < a; b++)
//	{
//		if (a % b == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int is_leap_year(int n)
//{
//	while (1)
//	{
//		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//			return 1;
//		else
//			return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}



//int b_s(int a[],int b,int c)
//{
//	int left = 0;
//	int right = c - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > b)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid]< b)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = b_s(arr, k, sz);//数组arr传参，实际传递的不是数组的本身
// //仅仅传过去了数组首元素的地址
//	if (b_s == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为：%d\n", ret);
//	}
//	return 0;
//}


//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);//改变外面的数值，传址调用
//	printf("%d\n", num);
//
//	add(&num);
//	printf("%d\n", num);
//
//	add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}


//函数的嵌套调用和链式访问
//void test2()
//{
//	printf("煞笔\n");
//}
//int test1()
//{
//	test2();
//	return 0;
//}
//int main()
//{
//	test1();
//	return 0;
//}//嵌套调用


//int main()
//{
//	//int len = stren("abc");
//	//printf("%d\n", len);
//	////链式访问
//	//printf("%d\n",strlen("abc"));
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//printf("%s\n", strcpy(arr1, arr2));//strcpy拷贝，将后拷贝到前
//	//return 0;
//
//	printf("%d", printf("%d", printf("%d", 43)));//printf返回的是打印在屏幕是字符的个数
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//函数声明一下
//	int add(int, int);//可以加x，y
//
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////函数的定义
//int add(int x, int y)
//{
//	return x + y;
//}

//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//#include "sub.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = sub(a, b);
//	printf("%d\n", c);
//	return 0;
//}//定义一般在.c文件中，声明一般在头文件中