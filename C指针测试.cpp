/*
*@brief c指针 结构体 链表测试函数
*@last_time2023-12-26
* 
* 
* 
*/

//return指针测试

//#include<stdio.h>
//int a;
//int Cpiont()
//{
//	
//	int* prt = &a;
//	int* ptr2;
//	ptr2 =&a;
//	return *prt;
//	//即a的值，如果直接return ptr 则是a的地址，因为我们就是这样赋值的，指针变量也是一种变量（但只能存储地址）
//	//这里是解一次一级指针，就是a的值
//}
//int* Cpiont2()
//{
//	int* ptr2;
//	ptr2 = &a;
//	return ptr2;//测试直接通过输出指针，实验是否是变量的地址（ptr2=&a；）
//	//注意这里返回 ptr2，直接返回一个地址，需要注意函数数据类型保持一直，模块时，主调函数赋值也要保持类型一致
//}
//int main()
//{
//	int* test = Cpiont2();//保持数据类型一致，因为return 的地址
//	int disadd = Cpiont();
//	printf("这应该是a的值%p\n", disadd);
//	printf("这应该是a的地址%p\n", test);
//	printf("a       %p\n", a);
//	printf("&a      %p", &a);
//
//
//	return 0;
//}
/*#include<stdio.h>

int C_Point_Test()
{
	int a;
	int* point = &a;
	float b;
	return a=10;
	return b;

}

int main()
{

	int A = C_Point_Test();
	int B = C_Point_Test();
	printf("%p\n", A);
	printf(" %p\n", (void*)&B);
}
*************************************/
/*2023-10-25 多级指针实验*/
/*2023-10-25 多级指针实验
#include <stdio.h>

int main() {
	int num = 10;
	int* ptr1 = &num; // 指针ptr1指向num的地址
	int** ptr2 = &ptr1; // 指针ptr2指向ptr1的地址
	int*** ptr3 =&ptr2;
	int**** ptr4 = &ptr3;
	printf("/***************************************num原值*********************************************\n");
	printf("ptr1的值（num的地址）：%p\n", &num);//num地址
	printf("ptr1的值（num的地址）：%d\n", &num);//num地址
	printf("%d\n", ptr1);//直接等效于&num 
	printf("ptr1的值（num的地址）：%p\n", num);//
	printf("ptr1的值（num的地址）：%p\n", (void*)ptr1);//num地址 加（void*防止编译器报错，void类型转化）

	printf("ptr1的值（num的地址）：%p\n", *(&ptr1));//num地址
	printf("ptr1的值（ptr1地址）：%p\n", &ptr1);//ptr1地址
	printf("ptr2的值（ptr1的地址）：%p\n", (void*)ptr2);// 指针ptr2指向ptr1的地址

	//Q： 如何通过二级指针打印num的值
	printf("ptr2的值（ptr1的地址）：%d\n", *ptr1);// 

	printf("ptr2的值（ptr1的地址）：%d\n", **ptr2);// 实现通过二级指针打印num的值
	printf("/****************通过各级指针修改num的值 观察不同次数解的输出******************************\n");
	*ptr1 = 123;
	printf("一级指针ptr1一次解num修改值%d\n", *ptr1);
	printf("二级指针ptr2二次解num修改值%d\n", **ptr2);// 
	printf("三级指针ptr3三次解num修改值%d\n\n", ***ptr3);// 

	printf(" num          %2d\n", num);// 
	printf("&num        %2d \n", &num);// 
	printf("*ptr1      %d\n",*ptr1);
	printf("ptr1   %d  \n ", ptr1);
	printf("&ptr1         %2d\n", &ptr1);
	printf("**ptr2  %d\n", **ptr2);// 二级指针两次解
	printf("*ptr2  %d\n ", *ptr2);// 二级指针一次解  
	printf("ptr2    %d\n ", ptr2);// 二级指针指向一级指针的地址
	printf("&ptr2    %d\n\n ", &ptr2);// 二级指针指向一级指针的地址

	printf("/*              即 直接打印指针 不加修饰符，输出上一级的地址                                                        \n");
	printf("/*             x级指针加y次*号，解y次指针 解1次指针等效于直接打印x指针，即输出上一级的内容   \n\n");
	printf("/*             如果有多级指针a 那么解1次，也就是解上一级指针b的内容，如果上一级指针b仍在指向新的指针c，\n\n");
	printf("/*            那么任意多级指针的一次*解输出就是c的地址，\n\n");
	printf("/*           因为解y次就是输出前y次的内容，a解1次就是前1次就是b的内容，b的内容是c的地址（定义时b指向c），相当于直接输出c（c指向更前一级），\n\n");

	printf("***ptr3    %d\n", ***ptr3);// ptr3三次解
	printf("**ptr3    %d\n", **ptr3);// ptr3两次解
	printf("*ptr3     %d\n", *ptr3);// ptr3一次解 上一级的内容 即ptr2的地址
	printf("&ptr3    %d\n", &ptr3);// 

	printf("ptr3    %d\n\n", ptr3);// 

	printf("%d\n", ****ptr4);// 
	printf("%d\n", ***ptr4);// 
	printf("%d\n", **ptr4);// 
	printf("%d\n",*ptr4);// 
	printf("%d\n", &ptr4);// 
	printf("%d\n", ptr4);// 


	return 0;
}
2023-10-25 多级指针实验*/



//结构体测试

/************************************************************
#include <stdio.h>
//为什么没有用struct来声明
void C_Point_Test(int* a, float* b) {
	*a = 10000;
	*b = 3.1415926;
}

int main() {
	int A;
	float B;

	C_Point_Test(&A, &B);

	printf("%d\n", A);
	printf("%f\n", B);
	/*****************************************************************************************

	int a = 66;  // 整型变量 a
	int* intPtr = &a; // 整型指针 intPtr 指向整型变量 a

	char* charPtr = (char*)intPtr; // 将整型指针转换为字符型指针


	printf("Value in charPtr: %c\n", *charPtr); // 输出字符型指针指向的值_WHY根据 ASCII 表示中的对应值输出字符 'A'


	return 0;
}

**************************************/

//#include <stdio.h>
//
//typedef struct {
//	int* aPtr;
//	float* bPtr;
//} Pointers;
//
//void C_Point_Test(Pointers* ptrs) {
//	int a = 10;
//	float b = 3.14;
//
//	ptrs->aPtr = &a;
//	ptrs->bPtr = &b;
//}
//
//int main() {
//	Pointers pointers;
//
//	C_Point_Test(&pointers);
//
//	printf("Address of a: %p\n", (void*)pointers.aPtr);
//	printf("Address of b: %p\n", (void*)pointers.bPtr);
//
//	return 0;
//}

/********************************************************************************
#include<stdio.h>
//struct 就是在定义一个数据类型（包含多个根属性）  所以可以定义成结构体，结构体也可直接包装成一个函数
//tpyedef  typedef 可以用于简化结构体的使用。
//通过 typedef，你可以为现有的数据类型（包拟如结构体）创建一个新的类型名，
struct Values {
	int intValue;
	float floatValue;
};

struct Values C_Point_Test() //用struct Values来定义这个函数是因为函数中使用了该类型的变量，想返回他
	//就得用该类型的数据类型来定义函数
{
	struct Values data;
	data.intValue = 10;
	data.floatValue = 3.14;
	return data;//一个结构体里面使用另一个已定义的结构体？
}

int main() {
	struct Values result1 = C_Point_Test();
	struct Values result2 = C_Point_Test();

	printf(" %d\n", result1.intValue);
	printf(" %f\n", result1.floatValue);

	printf(" %d\n", result2.intValue);
	printf("%f\n", result2.floatValue);

	return 0;
}
*******************************************************************

#include<stdio.h>//在这个例子中
//OuterStruct 结构体内部包含了一个 InnerStruct 结构体，
//可以通过 OuterStruct 的实例访问 InnerStruct 的成员变量。

struct InnerStruct {
	int innerValue;
};

struct OuterStruct {
	int outerValue;
	struct InnerStruct innerData;
};

int main() {
	struct OuterStruct data;
	data.outerValue = 10;
	data.innerData.innerValue = 20;

	printf("Outer value: %d\n", data.outerValue);
	printf("Inner value: %d\n", data.innerData.innerValue);

	return 0;
}
*********************************************************************/
/*********************************************************************
#include<stdio.h>//练习1
int main()
{
	struct Book 
	{
		char name;//如果想打印字符串 char name[20]; 下面同时定义并初始化中不用单引号用双引号，且打印不用%c而用 %s
		int pages;
	};
	//在定义结构体变量的同时初始化成员变量
	struct Book Test = {'A',100};//不严谨的做法，应为struct Book Test 
	/*可以等效成
	Struct Book Test //这里最好加上struct ，这里未加知识测试在同一作用域内，Book这一结构体数据类型
	Test.name='A';										//是否可以省去struct 要想省去，可以将其定义在本作用域内，即本函数的局部域，或者是用typedef
	Test.pages=100;									//来创建一个新的类型名 如 type struct Book{ char name;int pages;} BookStruct; 
//分别初始化结构体的成员变量			    //但是这里也是要加上struct的，以后使用此变量类型名来定义可以直接BookStruct 变量名；
																// typedef定义后的结构体名字可以和原结构名一样 。

	printf("%c\n", Test.name);
	//%c  输出单个字符%s 用于输出字符串。它需要一个以 null 结尾的字符数组（字符串）
	//它需要一个以 null 结尾的字符数组（字符串）。例如，char str[] = "Hello"; printf("%s", str); 会输出字符串 "Hello"。
	//%s 会从传递的地址开始打印字符，直到遇到空字符（'\0'）为止，表示字符串的结束。
	printf("%d", Test.pages);
	return 0;
}
***********************************************************/
/***************************************************
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//不能直接使用赋值语句给其赋字符串值
//可以使用字符数组来表示字符串，然后使用 strcpy 函数 将字符串赋给ThisBook.name中
typedef struct BookInfo
{
	char name[20];
	int pages;
} BookInfo;
int main()
{
	BookInfo ThisBook;
	strcpy(ThisBook.name, "Fire");
	ThisBook.pages = 1000;

	printf("%s\n", ThisBook.name);
	printf("%d", ThisBook.pages);

	return 0;
}
***************************/


/**************************************************
#include<stdio.h>


typedef struct BookInfo
{
	char name;
	int pages;
} BookInfo;
int main()
{
	BookInfo ThisBook={'A',1000};
	printf("%c\n",ThisBook.name);
	printf("%d",ThisBook.pages);

	return 0;

}

************/

//多级指针的操作

//#include<stdio.h>
//int main()
//{
//	int value1=0;
//	int value2 = 1;
//	int* p1 = &value1;
//	int** p2 = &p1;
//	int*** p3 = &p2;
//	printf("value1   %p\n",value1);
//	printf("value2   %p\n", value2);
//
//	printf("p1%p\n",p1);
//	printf("p2%p\n",p2);
//	printf("p3%p\n",p3);
//	printf("&p1,   &p2,   &p3    %p\n\n",&p1,&p2,&p3);
//
//	printf("*p1    %p\n",*p1);
//	printf("*p2    %p\n", *p2);
//	printf("**p2    %p\n", **p2);
//	printf("*p3    %p\n", *p3);
//	printf("**p3    %p\n", **p3);
//	printf("***p3     %p\n\n", ***p3);
//
//	**p3 = &value2;
//	printf("*p1    %p\n", *p1);
//	printf("**p3=&value2     %p\n\n",p1 );
//	printf("***p3 %p\n", ***p3);
//
//	*p2 = &value2;
//	printf("*p1    %p\n",* p1);
//	printf("*p2 = &value2    %p\n\n",p1 );
//
//	p1 =& value2;
//	printf("*p1    %p\n", *p1);
//	printf("p1=value2    %p\n\n", p1);
//
//
//
//}

//数组名当作指向数组第一个元素的指针来处理。
//即直接打印 数组名会 被当成打印数组 第一个元素的地址


//#include <stdio.h>
//
//int main() {
//	int arr[] = { 10, 20, 30, 40, 50 };
//	int* ptr = arr; // 指向数组的第一个元素
//
//	printf("当前指针指向的值：%d\n", *ptr); // 输出当前指针指向的值
//
//	ptr++; // 指针自增，指向下一个元素
//	printf("指针自增后指向的值：%d\n", *ptr); // 输出指针自增后指向的值
//
//	return 0;
//}



//学习关于字符串
//下面设计一些字符串处理函数
/*strlen()：用于计算字符串的长度（不包括末尾的 '\0' 终止符）。
strcpy()：用于将一个字符串复制到另一个字符串中。
strcmp()：用于比较两个字符串。
strcat()：用于将一个字符串连接到另一个字符串的末尾*/


/*

#include <stdio.h>

int main() 
{
	//方法一
	//每行字符数量不一样，使用这种printf 或者一维数组需要在每行字符串末尾手动添加换行符 \n 来区分不同的行
	/*printf(
		"                ********\n"
		"               ************\n"
		"               ####....#.\n"
		"             #..###.....##....\n"
		"             ###.......######              ###            ###\n"
		"                ...........               #...#          #...#\n"
		"               ##*#######                 #.#.#          #.#.#\n"
		"            ####*******######             #.#.#          #.#.#\n"
		"           ...#***.****.*###....          #...#          #...#\n"
		"           ....**********##.....           ###            ###\n"
		"           ....****    *****....\n"
		"             ####        ####\n"
		"           ######        ######\n"
		"##############################################################\n"
		"#...#......#.##...#......#.##...#......#.##------------------#\n"
		"###########################################------------------#\n"
		"#..#....#....##..#....#....##..#....#....#####################\n"
		"##########################################    #----------#\n"
		"#.....#......##.....#......##.....#......#    #----------#\n"
		"##########################################    #----------#\n"
		"#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n"
		"##########################################    ############\n"
	);*/
	//方法二、二维数组//
	//注意如果在定义一个数组（或二维数组内层）时，应考虑其终止符，在存储字符串中
	//用双引号 编译器自动加，单引号手动创建，就应该手动加   '\0', 此时，不管是自动加的，还是手动加的
	//都得把终止符算作字符长度一部分， 如一个字符串最大长度20 应该定义声明成21，因为包含一个终止符

	//Q 如何 合理确定一个数组元素长度呢？
	//    A1在完全不可估的情况下，可以动态分配内存
	//      malloc()函数
	//char *dynamicString = malloc(maximumLength + 1); // 分配足够大的内存空间，+1 用于终止符
	//   A2 使用宏 即预定义的常量   
	// #define MAX_LENGTH 100 
	//确保 这个常量的重用 ，且方便修改（宏定义是简单的文字替换，主调被调函数是开辟内的内存栈）
/*
	char mario[][80] = {
		"                ********",
		"               ************",
		"               ####....#.",
		"             #..###.....##....",
		"             ###.......######              ###            ###",
		"                ...........               #...#          #...#",
		"               ##*#######                 #.#.#          #.#.#",
		"            ####*******######             #.#.#          #.#.#",
		"           ...#***.****.*###....          #...#          #...#",
		"           ....**********##.....           ###            ###",
		"           ....****    *****....",
		"             ####        ####",
		"           ######        ######",
		"##############################################################",
		"#...#......#.##...#......#.##...#......#.##------------------#",
		"###########################################------------------#",
		"#..#....#....##..#....#....##..#....#....#####################",
		"##########################################    #----------#",
		"#.....#......##.....#......##.....#......#    #----------#",
		"##########################################    #----------#",
		"#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#",
		"##########################################    ############"};
	for (int index = 0; index < 22; index++)
	{
		printf("%s\n", mario[index]);
	}

	return 0; 
}

*/



/*

#include<stdio.h>
int main()
{
	int test[23] = {'H','E','L','L','O','M','Y','F','R','I','E','N','D','\0'};
	/*
	for(int index = 0;index<16;index++)
	printf("%s", test);//这里会循环打印H，而非顺序打印字符数组中的内容

	

	*
	//修改为顺序打印
	for (int index = 0; index < 16; index++)
		printf("%c", *  (test+index)  );//这里将 %s改为%c，并且test作为数组其实可以理解为存储了首元素的指针，所以只有解引用才可以输出内容，+index遍历数组


	return 0;
}
*/

// 新想法构成链表结构
// 指针数组里面 存放的数组有相互指向的关系
#include <stdio.h>

int main() {
	int x = 1, y = 2, z = 3, w = 4;
	int* p1 = &x, * p2 = &y, * p3 = &z, * p4 = &w;

	int* a[] = { p1, p2, p3, p4 };

	// 正确的指针关系: p1 -> p2 -> p3 -> p4
	p1 = p2;
	p2 = p3;
	p3 = p4;

	// 输出每个指针所指向的整数值
	for (int i = 0; i < 4; i++) {
		printf("a[%d] points to: %d\n", i, *a[i]);
	}

	return 0;
}
