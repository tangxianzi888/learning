#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

//int main()
//{
// //c�����ṩ��һ��������system()- ִ��ϵͳ�����
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");
//
//	while(1)
//	{
//		printf("��ע����ĵ��Խ���һ�����ڹػ�,�����롰��������ֹͣ�ػ�������\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}return 0;
//}//�ػ�


//int main()
//{
//	//c�����ṩ��һ��������system()- ִ��ϵͳ�����
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");
//
//again:
//		printf("��ע����ĵ��Խ���һ�����ڹػ�,�����롰��������ֹͣ�ػ�������\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//		}
//		else
//		{
//			goto again;
//	}return 0;
//}//�ػ�


//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);//memset(ָ������飬����buffer��ֵ��buffer�ĳ���)
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
//		//�ж�y�ǲ�������
//		//1.��4���������ܱ�100����������
//		//2.�ܱ��İ�����
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
//		//�ж�y�ǲ�������
//		//1.��4���������ܱ�100����������
//		//2.�ܱ��İ�����
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
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i�����ܲ�������
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);//����
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)//sqrt�ǿ�ƽ���ĺ���
//	{	//m=a*b
//		//a,b��������һ������С�ڵ���m��ƽ��
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i�����ܲ�������
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);//����
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
//	return z;//����z�����ؽϴ�ֵ
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a, b);//������������ǳ��������������������ʽ
//
//	printf("max=%d\n", max);
//	return 0;
//}//��get_max������



//void Swap(int x,int y)//�����������͵ĵط�д����void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
//{
//	int z = 0;
//	z = x;
//	x = y;//��ֵ���ã�
//	y = z;//�ı��βΣ�ʵ�β���Ӱ��
//}//д������x��yҲ�������¿ռ�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("ǰ��a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("��a=%d b=%d\n", a, b);
//	return 0;
//}//��������������ֵ



//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�����
//	*pa = 30;
//	printf("%d\n", a);
//	return 0;
//}


//void Swap(int* pa, int* pb)//�����������͵ĵط�д����void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;//��ַ���ã�
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("��a=%d b=%d\n", a, b);
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
//	int ret = b_s(arr, k, sz);//����arr���Σ�ʵ�ʴ��ݵĲ�������ı���
// //��������ȥ��������Ԫ�صĵ�ַ
//	if (b_s == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
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
//	add(&num);//�ı��������ֵ����ַ����
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


//������Ƕ�׵��ú���ʽ����
//void test2()
//{
//	printf("ɷ��\n");
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
//}//Ƕ�׵���


//int main()
//{
//	//int len = stren("abc");
//	//printf("%d\n", len);
//	////��ʽ����
//	//printf("%d\n",strlen("abc"));
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//printf("%s\n", strcpy(arr1, arr2));//strcpy���������󿽱���ǰ
//	//return 0;
//
//	printf("%d", printf("%d", printf("%d", 43)));//printf���ص��Ǵ�ӡ����Ļ���ַ��ĸ���
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//��������һ��
//	int add(int, int);//���Լ�x��y
//
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////�����Ķ���
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
//}//����һ����.c�ļ��У�����һ����ͷ�ļ���