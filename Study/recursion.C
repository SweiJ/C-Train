#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

//// 递归打印输入整数各位
//int print(unsigned int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	printf("输入一个数字：");
//	scanf("%d", &num);
//	print(num);
//}

//// 递归和非递归打印阶乘
//int main()
//{
//	int i, fac, num = 1;
//	scanf("%d", &fac);
//	for (i = 1; i <= fac; i++)
//		num *= i;
//	printf("%d的阶乘为%d", fac, num);
//}

//// 递归用法
//int factor(int fac)
//{
//	if (fac == 1)
//		return 1;
//	else
//		return fac * factor(fac - 1);
//	
//}
//int main()
//{
//	int fac;
//	scanf("%d", &fac);
//	printf("%d阶乘为%d", fac, factor(fac));
//}

//// 递归和非递归strlen用法
//int mystrlen(char *p)
//{
//	char* q = p;
//	while (*q !=  '\0')
//		q++;
//	return q - p;
//}
//int main()
//{
//	char ch[20] = { 0 };
//	scanf("%s", ch);
//	printf("%d", mystrlen(ch));
//}

//// 递归用法
//int mystrlen(char* p)
//{
//	if (*p != '\0')
//		return 1 + mystrlen(p + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char ch[20] = { 0 };
//	scanf("%s", ch);
//	printf("%d", mystrlen(ch));
//}

 ////字符串逆序实现
//int mystrlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + mystrlen(arr + 1);
//	else
//		return 0;
//}
//int reverse_string(char* string)
//{
//    if (mystrlen(string) < 2) // 当元素为1位时不需要操作
//    {
//        return string;
//    }
//    else {
//        char ch = *string;  // 当前字符串首元素临时存储给新变量
//        int len = mystrlen(string) - 1; // 当前字符串最后一项
//        *string = *(string + len); // 最后一位元素赋给当前字符串首元素
//        *(string + len) = '\0'; // 最后一位元素清0
//        reverse_string(string + 1); // 依次递归原string下一个元素
//        *(string + len) = ch; // 递归后将当前字符串首元素赋值最后一位元素
//        return string;
//    }
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s", reverse_string(arr));
//}

//// 计算某个数的各项之和
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	printf("%d", DigitSum(num));
//}

//// 实现n的k次方
//int power(int n, int k)
//{
//	if (k != 1)
//		return n * power(n, k - 1);
//	else
//		return n;
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d", power(n, k));
//}

//// 斐波那契数列
//int fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//}