#include <stdio.h>
//int main()
//{
//	int a = 3 / 5;
//	printf("%d\n", a);
//	return 0;
//}

//移位操作符
// //左移操作符：左边丢弃，右边补0
// //右移操作符：1：算术右移，右边丢弃，左边补原符号位
//				 2：逻辑右移，右边丢弃，左边补0
//int main()
//{
//	int a = 2;
//	int b = a << 1;//把a的二进制位向左移动一位
//	printf(" b = %d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a >> 1;//把a的二进制位向右移动一位
//	printf(" b = %d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	// ^ - 按（2进制）位异或
//	//对应的二进制位异或
//	//规则：相同为0，相异为1
//	int c = a ^ b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//
//
//	//// | - 按（2进制）位或
//	//int c = a | b;
//	//printf("c = %d\n", c);
//	//////00000000000000000000000000000011
//	//////00000000000000000000000000000101
//	////  00000000000000000000000000000111
//	
//
//	////& - 按（2进制）位与
//	//int c = a & b;
//	//printf("c = %d\n", c);
//	////00000000000000000000000000000011
//	////00000000000000000000000000000101
//	////00000000000000000000000000000001
//	return 0;
//}//必须都是整数


//int main()
//{
//	int a = 3;
//	int b = 5;
//	//异或
//	a = a ^ b;//110
//	b = a ^ b;//011    a^b^b=a    b^b=0   0^a=a
//	a = a ^ b;//101
//
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*///有限制，数值过大不行了。
//
//	printf("%d %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 13;//000001101
// //把a的二进制中的第5位置成1
//	a = a | (1 << 4);
//	printf("%d\n", a);
// //把a的二进制中的第5位置成0
// a = a & ~(1<<4);//000011101  -> (~00010000  -> 11101111)->00001101
// printf("%d\n",a);
//	return 0;
//}


//int main()
//{
//	int a = -1;
//	//1000000000000000000000000000001 - 原码
//	//1111111111111111111111111111111 - 反码
//	//1111111111111111111111111111111 - 补码
//	// ~ 按位取反
//	//负数内存中存储的是补码
//	//1111111111111111111111111111111
//	//0000000000000000000000000000000
//	//
//	int b = ~a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;//pa是用来存放地址的 - pa就是一个指针变量
//	*pa = 20;//* - 解引用操作符 - 间接访问操作符
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}


//比较两个字符串不能使用==


//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a && b)//&&并且，都为真才执行
//	{
//		printf("真！\n");
//	}
//	if(a || b)//||或者，有一个为真就执行
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//先算a++，a=0为假 ，后面均不计算
//	//i = a++ || ++b || d++;//前面为真，后面均不计算
//	printf("a = %d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	a = (a > 5 ? 1 : 2);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	逗号表达式 - 要从左向右依次计算，但整个表达式的结果是最后一个表达式的结果
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	return 0;
//}

//结构体
//struct
//struct Book
//{	//结构体的成员（变量）
//	char name[20];
//	char id[20];
//	int price;
//};//创建了一个自定义类型
//int main()
//{	
//	struct Book b ={"c语言","c2211",55};
//	struct Book* pb = &b;//
//	////b -- (*pb)两个一致
//	// 
//	// //结构体指针->成员名
//	////b.name换成pb->name
//	////b.id换成pb->id
//	/*printf("书名：^%s\n",b.name);
//	printf("书号：%s\n", b.id);
//	printf("定价：%d\n", b.price);*/
//
//	return 0;
//}


//int main()
//{
//	char a = 3;//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	char c = a + b;
//	////按照符号位提升
//	////00000000000000000000000000000011
//	////00000000000000000000000001111111
//	////相加之后截断10000010 - c
//	////补码11111111111111111111111110000010  - 1得到反码
//	////反码11111111111111111111111110000001
//	////原码10000000000000000000000001111110
//	
//	////发现a和b都是char类型，都没有一个int的大小
//	////这里就会发生整形提升
//	printf("%d\n", c);//原码打印
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	//前两个均需要整形提升
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//
//	}
//	return 0;
//}



//初阶指针
//指针类型的意义
//1.指针类型决定了：指针解引用的权限多大
//2.…………………：指针走一步，能走多远（步长）
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p + 1);//跳过一个整形
//	printf("%p\n", pc + 1);//跳过一个字符
//
//	/*int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;*/
//	//char* pa = &a;解引用一次，访问一个字节
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//p+i其实是指向下标为i的元素
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;//a出test函数就销毁
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//但*p仍然记得a的地址,使用时就是非法访问
//	return 0;
//}

//int main()
//{
//	//当前不知道p应该初始化为什么地址的时候，之间初始化为NULL
//	int* p = NULL;
//	return 0;
//}

//#define N_VALNUES 5
//int main()
//{
//	float values[N_VALNUES];
//	float* vp;
//	//指针+-整数;指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALNUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* p1 = arr + 9;
//	while (p <= p1)
//	{
//		printf("%d\n", *p);
//		p++;
//			
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//指针减去指针得到的是两个指针之间的元素个数
//	return 0;
//}

//int my_strlen(char* a)
//{
//	char* b = a;
//	while (*a != '\0')
//	{
//		a++;
//	}
//	return a - b;
//}
//int main()
//{
//	int ret = my_strlen("abc");
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	//ppa就是一个二级指针变量
//	int** ppa = &pa;//pa也是个变量，&pa取出pa在内存中起始地址
//	//*ppa=pa   *pa=a//**ppa=a
//	return 0;
//}

//指针数组 - 数组
//int main()
//{
//	int* arr[5] = { 0 };
//	return 0;
//}


////结构体
////struct book-类型 b-对象
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//}s1, s2;//s1和s2也是结构体变量
////s1,s2也是全局变量
//int main()
//{
//	//s是局部变量
//	struct stu s = { {'w',20,3.14},"张三",30,"2222" };//对象
//	//  .   ->
//	//printf("%c\n", s.sb.c);
//	//printf("%c\n", s.id);
//
//	struct stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//
//	return 0;
//}

int main()
{

	return 0;
}
