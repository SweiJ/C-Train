#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>

//int main()
//{
//	int m, n, count = 0, temp;
//	scanf("%d %d", &m, &n);
//	if (n > m)
//	{
//		temp = m;
//		m = n;
//		n = temp;
//	}
//	while (m)
//	{
//		if (m % 2 != n % 2 && n != 0)
//			count++;
//		if (n == 0 && m % 2 != 0)
//			count++;
//		m /= 2;
//		n /= 2;
//	}
//	printf("%d", count);
//}

//int print(int n)
//{
//	int i;
//	for (i = 31; i >= 1; i -= 2)
//		printf("%d", (n >> i) & 1);
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//		printf("%d", (n >> i) & 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//}

//int main()
//{
//	int n = 0, count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	printf("%d", count);
//}

//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	printf("m = %d, n = %d\n", m, n);
//	m = m ^ n;
//	n = m ^ n;
//	m = m ^ n;
//	printf("m = %d, n = %d", m, n);
//}