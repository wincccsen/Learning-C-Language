//#include <stdio.h>



//int main()
//{
//
//	//
//	//	printf("(Are you OK\?\?)\n")
//	//		(Are you ok ? ? )
//	//		(Are you ok ? ?]
//	//		�ڹ�ȥ��һЩ�������ϣ�֧������ĸ�����µı������޷���֤�ˡ�
//	//		������-- ]
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
//	printf("\a");//b�ն˷������������߳�����˸
//	printf("abcdefghi\n");
//	printf("abcde\bfghi\n");//\b��ʾ������һ����
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
////	;//�����
////	3 + 4;//���ʽ���
////	int a = 10;
////	int b = 30;
////	a + b;//���ʽ���
////
////	printf("hehehe\n"); //�����������
////
////		return 0;
////
////}
//
//
////C���Է���ע���ǲ���Ƕ��ʹ�õ�
//
//
//int main()
//{
//
//	//�������ͱ���a,����ֵ10
//	int a = 10;/*�������ͱ�����������ֵ10*/
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
//	int a/*hehe*/b  //ע�����м��ʾΪ�ո�
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
//	//C������0��ʾ�ӣ���0��ʾ��
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

	//sizeof ����Ľ����������size_t,size_t��һ���޷��ŵ����������������ڴ�ӡ��ʱ����%zd
	//	int   ---%d
	//	char ---%c
	//	�ַ��� ---%s

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
//	//���� ������
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
//	int age = 0;//��ʼ��-�ڱ���������ͬʱ����һ��ֵ�г�ʼ��
//	char ch = 'q';
//	return 0;
//
//}

//
//int main()
//{
//	int a;//����
//	a = 1;
//	printf("%d\n", a);
//
//	a = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//int b = 100;//ȫ�ֱ���

//int main()
//{
//	{
//		int a = 10;//�ֲ�����
//		printf("%d\n", a);
//
//	}
//	printf("%d\n", a);//aû�еõ�ֵ
//	return 0;
//}

//int b = 100;//ȫ�ֱ���
//
//int main()
//{
//	{
//		int a = 10;//�ֲ�����ֻ�����Լ����ڵľֲ���Χ��ʹ��
//		printf("%d\n", b);//b�ɻ�
//
//	}
//	printf("%d\n", b);
//	
//	return 0;
//}

//int  a = 100;//ȫ�ֱ���
//
//int main()
//{
//
//	{
//		int a = 10;//�ֲ�����
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