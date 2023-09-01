#define _CRT_SECURE_NO_WARNING 1

#include <stdio.h>

int main()//一个；代表一个语句，只有分号也算是语句（空语句）     if语句相关
{
	//int age = 10;//多个if
	//if (age < 18)
	//	printf("1");
	//else if (age >= 18 && age < 36)
	//	printf("2");
	//else
	//	print("3");
	//int age = 10;
	//if (age < 18)
	//	printf("weichengnian");
	//else
	//	printf("chengnian");//两个选择的语句
	//	int age= 0;
	//if (age < 18)
	//	printf("未成年\n");
	//return   0;//单个if语句
}

//结构体 用来表示一个事物的各种属性，就是自己创造出来的一种类型
//struct Book//结构体
//{
//	char name[20];
//	short price;
//
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55 };
//	struct Book* pb = &b1;
//	printf("%s\n", (*pb).name);
//	printf("%s\n", pb->name);
//	/*printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	b1.price = 30;
//	printf("修改后的价格：%d\n", b1.price);
//		return 0;*/
//}

//int main()//指针变量相关知识 ：（1）内存：调用程序时需要将内存空间调用，为了更加合理的调用，于是选择将内存按照字节为单位进行划分，每个字节都带有一个地址，现
//在输入一个变量，用&+变量可以表示其地址，利用类型+*可以得到他的地址
//{
//
//	double b = 3.14;
//	double* pd = &b;
//	*pd = 5.5;
//	printf("%d\n", sizeof(pd));//32位计算机地址是占32个比特位，4个字节
//	printf("%lf\n",* pd);
//	printf("%lf\n", b);
//	
//	int a = 10;
//	int* p = &a;//变量p里边储存这a的地址
//	printf("%d\n", p);
//	//*p;//*p 是根据p的地址寻找其变量，*叫解引用操作符/间接访问操作符
//	*p = 20;
//	printf("%d/n", a);//此时为20
//	return 0;
//
//}