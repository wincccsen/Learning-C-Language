//#include <stdio.h>



//int main()
//{
//
//	//
//	//	printf("(Are you OK\?\?)\n")
//	//		(Are you ok ? ? )
//	//		(Are you ok ? ?]
//	//		在过去的一些编译器上，支持三字母，在新的编译器无法验证了。
//	//		？？）-- ]
//	//		??)
//
//	return 0;
//}


//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');
//
//	printf("%s\n", "abcedf");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//
//
//	printf("c:\\test\\test.c");
//
//
//	printf("\a");//b终端发出警报声或者出现闪烁
//	printf("abcdefghi\n");
//	printf("abcde\bfghi\n");//\b表示光标回溯一个键
//
//
//
//	return 0;
//}

//#include <string.h>

//

//
//
////int main()
////{
////
////	;//空语句
////	3 + 4;//表达式语句
////	int a = 10;
////	int b = 30;
////	a + b;//表达式语句
////
////	printf("hehehe\n"); //函数调用语句
////
////		return 0;
////
////}
//
//
////C语言风格的注释是不能嵌套使用的
//
//
//int main()
//{
//
//	//创建整型变量a,并赋值10
//	int a = 10;/*创建整型变量啊，并赋值10*/
//	/*
//	
//	int b=30;
//	int c=50;
//
//	
//	*/
//	return 0;
//}
//
//
//int main()
//{
//
//	int a/*hehe*/b  //注释在中间表示为空格
//		return 0;
//
//}
//
//int main()
//{
//	/*char ch='w; */
//	return 0;
//
//}
//
//int main()
//[
//	//C语言中0表示加，非0表示真
//	if (2 == 1 + 1)
//	printf("hehe\n");
//
//	return 0;
//
//]
//
//#include <stdbool.h>

//int main()
//{
//	//_Bool flag = false;
//	bool flag = true;
//	if (flag)
//		printf("hehe\n");
//
//	return 0;
//}

	//sizeof 计算的结果的类型是size_t,size_t是一种无符号的整数，这种整数在打印的时候，用%zd
	//	int   ---%d
	//	char ---%c
	//	字符串 ---%s

//
//int main()
//{
//
//	printf("%zd\n", sizeof(char));
	//printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//
//	return 0;
//
//
//}
//
//int main()
//{
//	int a= 10;
//
//	printf("%zd\n", sizeof a);
//	printf("%zd\n", sizeof(a));
//
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(3.14));//double
//	printf("%zd\n", sizeof(3.14f));//float
//
//	return 0;
//
//
//}


//int main()
//{
//	//类型 变量名
//	int   age;
//	char ch;
//	float f;
//	double weight;
//	_Bool num;
//
//	return 0;
//
//}

//
//int main()
//{
//	int age = 0;//初始化-在变量创建的同时，给一个值叫初始化
//	char ch = 'q';
//	return 0;
//
//}

//
//int main()
//{
//	int a;//变量
//	a = 1;
//	printf("%d\n", a);
//
//	a = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//int b = 100;//全局变量

//int main()
//{
//	{
//		int a = 10;//局部变量
//		printf("%d\n", a);
//
//	}
//	printf("%d\n", a);//a没有得到值
//	return 0;
//}

//int b = 100;//全局变量
//
//int main()
//{
//	{
//		int a = 10;//局部变量只能在自己所在的局部范围内使用
//		printf("%d\n", b);//b可换
//
//	}
//	printf("%d\n", b);
//	
//	return 0;
//}

//int  a = 100;//全局变量
//
//int main()
//{
//
//	{
//		int a = 10;//局部变量
//		printf("%d\n", a);//10
//
//	}
//
//	return 0;
//}
# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//    int a = 0;
//    int b = 0;
//    char ch = '*';
//    scanf("%d%d", &a, &b);
//
//    for (int i = 0; i < a; i++)
//        printf("%c\n", ch);
//    for (int j = 0; j < b; j++)
//        printf("%c", ch);
//
//    return 0;
//}
//#include <stdio.h>

//int main() {
//    int a = 0;
//    int b = 0;
//    char ch = '*';
//    while(scanf("%d %d", &a, &b)!=EOF)
//    {
//        if (a >= 1 && a <= 100 && b >= 1 && b <= 100)
//        {
//            for (int i = 0; i < a; i++)
//                printf("%c", ch);
//            printf("\n");
//            for (int j = 0; j < b; j++)
//                printf("%c", ch);
//            printf("\n");
//        }
//    }
//    return 0;
//}

int main()
{
	int n = 1;
	for(n;n<=100;n++)
	{
		if(n%3==0)
		printf("%d ", n);
	}
	return 0;
}