#define	_CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
/*	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = Add(a, b);
	printf("%d\n", c)*/;





	/*printf("hello C\n");*/

	/*printf("%d\n", n);
	printf("%c\n", 'q');
	printf("%lf\n", 3.14);*/




	//printf("%c\n", 'q');
	//printf("%c\n", 81);


	/*int i = 0;
	for (i = 32; i <= 127; i++)
	{
		printf("%c ", i);
		if (i % 16 == 15)
			printf("\n");
	}*/

	//printf("%s\n", "hello C");//字符串的打印格式用%s来指定
	//printf("hello c");


	// \0 是字符串的结束标志
	//char arr1[] = { 'a','b','c' };//arr1数组中存放3个字符
	//char arr2[] = "abc";//arr2数组中存放字符串
	//printf("%s\n", arr1);//打印为abc和随机值
	//printf("%s\n", arr2);//打印为abc


	////
	//char arr1[] = { 'a','b','c','\0' };
	//char arr2[] = "abc";
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%s\n", "abc\0def");


//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("c:\\test\\code\\test.c\n");
//	printf("\a");
//	printf("%c\n", '\130');//130是8进制，转换成10进制是88，以88作为ASCII码值的字符是
//	printf("%c\n", '\x30'); //x30中的30是16进制，转换成10进制是48，以48作为ASCII码值的
//	
//	return 0;
//}

# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
	int main()
	{
		int x;
		float y;

		// ??输? " -13.45e12# 0"
		scanf("%d", &x);
		printf("%d\n", x);

		return 0;
	}

