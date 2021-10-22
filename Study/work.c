#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    long n, i, sum = 0;
//    scanf("%ld", &n);
//    i = n;
//    while (i)
//    {
//        // while(i > pow(10, 9))
//        i = i / 2;
//        sum += i;
//        if (i <= 50)
//        {
//            printf("%ld\n", i);
//            printf("%ld\n", n - sum);
//            break;
//        }
//        printf("%ld\n", i);
//        i = n - sum;
//    }
//}
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int num = 0;
//    char n1[20] = { 0 };
//    char m1[20] = { 0 };
//    char y;
//    scanf("%d %d", &n1[num], &m1[num]);
//    while(n1[num] != '\0')
//    {
//        scanf("%d %d", &n1[num], &m1[num]);
//        num++;
//    }
//    int count = 0;
//    int i = 0;
//    int n = n1[num] - '0';
//    int m = m1[num] - '0';
//    for (i = n; i <= m; i++)
//    {
//        int j = 0;
//        for (j = 2; j <= sqrt(i); j++)
//            if (n % j == 0)
//                break;
//            else
//                count++;
//    }
//    printf("%d\n", count);
//}

//#include <stdio.h>
//#include <ctype.h>
//#include <assert.h>
//
//int my_atoi(char* pstr)
//{
//	int ret = 0; // 返回数值
//	int sign = 1; // 符号位
//
//	assert(pstr);
//
//	while (isspace(*pstr) != 0) // 跳过空格
//	{
//		pstr++;
//	}
//
//	if (*pstr == '-')  // 如果是负号 则符号为-1
//		sign = -1;
//	if (*pstr == '-' || *pstr == '+')
//		pstr++;
//
//	while (*pstr >= '0' && *pstr <= '9')
//	{
//		ret = ret * 10 + *pstr - '0';
//		pstr++;
//	}
//	ret = sign * ret;
//
//	return ret;
//}
//int main()
//{
//	char a[] = "-2000";
//	char b[] = "2021";
//
//	printf("%d\n", my_atoi(a));
//	printf("%d\n", my_atoi(b));
//
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//char* my_strncat(char* dest, const char* src, int count)
//{
//    assert((dest != NULL) && (src != NULL));
//    char* ret = dest;
//    while (*dest != '\0')
//        dest++;
//    while (count--)
//    {
//        if ((*dest++ = *src++) == '\0')
//            return ret;
//    }
//
//    *dest = '\0';
//    return ret;
//}
//int main()
//{
//    char str1[20] = "I am ";
//    char str2[20] = "a student";
//    my_strncat(str1, str2, 6);
//    printf("%s\n", str1);
//    getchar();
//    return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//char* my_strncpy(char* dst, const char* src, size_t len)
//{
//    assert(dst != NULL && src != NULL);
//    char* res = dst;
//    while (len--)
//    {
//        *dst++ = *src++;
//    }
//    return res;
//}
//int main()
//{
//    char str1[20] = "student ";
//    char str2[20] = "best";
//    my_strncpy(str1, str2, 3);
//    printf("%s\n", str1);
//    getchar();
//    return 0;
//}

#include <stdio.h>

//int main()
//{
//	int a[11] = { 1,2,3,4,5,6,6,4,3,2,1 };
//	int i, flag = 1;
//	for (i = 0; i < 11; i++)
//	{
//		flag = 1;
//		int j = 0;
//		for (j = i + 1; j < 11; j++)
//		{
//			if (a[i] == a[j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d", a[i]);
//			break;
//		}
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//char* my_strstr(char* p1, char* p2)
//{
//    char* ret = p1;
//    while (*p1 != '\0')
//        p1++;
//    while (*p2 != '\0')
//    {
//        *p1 = *p2;
//        p2++;
//    }
//    return ret;
//}
//int main()
//{
//    char a[20] = { 0 };
//    char b[20] = { 0 };
//    scanf("%s", a);
//    scanf("%s", b);
//
//    char* p = my_strstr(a, b);
//    printf("%s", p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int m, n, i, j, index;
//	int a[20] = { 0 };
//	int b[20] = { 0 };
//	int c[30] = { 0 };
//
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < m; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < n; i++)
//		scanf("%d", &b[i]);
//	for (index = 0; index < m; index++)
//		c[index] = a[index];
//	for (j = 0; j < n; j++, index++)
//		c[index] = b[j];
//	for (i = 0; i < index - 1; i++)
//	{
//		for (j = 0; j < index - 1 - i; j++)
//		{
//			if (c[j] > c[j + 1])
//			{
//				int temp = c[j];
//				c[j] = c[j + 1];
//				c[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < index; i++)
//		printf("%d ", c[i]);
//}

//#include <stdio.h>
//
//int swap(int arr[2])
//{
//	int temp = arr[0];
//	arr[0] = arr[1];
//	arr[1] = temp;
//}
//int main()
//{
//	int array[2] = { 10,20 };
//	swap(array);
//	printf("%d %d", array[0], array[1]);
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0, i;
//	int a[34][34] = { 0 };
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			a[i][0] = 1;
//			if(j >= 1)
//				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

//int main()
//{
//	char* p[10] = { 0 };
//
//	int i = 0;
//	*p = (char*)malloc(10 * sizeof(char));
//	while (scanf("%s", p[i]) != EOF);
//	i--;
//	for (; i > 0; i--)
//	{
//		printf("%s ", p[i]);
//	}
//}

// 单词翻转
//int main()
//{
//	char a[100] = { 0 };
//	int i = 0;
//	scanf("%[^\n]", a);
//	int index = strlen(a);
//	for (i = strlen(a) - 1; i >= 0; i--)
//	{
//		
//		if (a[i] == ' ' || i == 0)
//		{
//			int j = i + 1;
//			if (i == 0)
//				j = i;
//			for (; j < index; j++)
//			{
//				printf("%c", a[j]);
//			}
//			printf(" ");
//			index = i;
//		}
//	}
//}


// 报数
//int main()
//{
//	int a[1000] = { 0 };
//	int i = 0, n = 0, m = 0, count = 0;
//	scanf("%d %d", &m, &n);
//	
//	for (i = 0; i < m; i++)
//		a[i] = i + 1;
//	i = 0;
//	while(m != 1)
//	{
//		count++;
//		if (count == n)
//		{
//			int j = i;
//			for (; j < m - 1; j++)
//				a[j] = a[j + 1];
//			m--;
//			i--;
//			count = 0;
//		}
//		if (i + 1 == m && i != 0 && count != n)
//			i = -1;
//		i++;
//	}
//	printf("%d", a[0]);
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 1000; i++)
//	{
//		int j = 0, a = 0;
//		for (j = 1; j <= i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				a += j;
//			}
//		}
//		if (a == i)
//			printf("%d\n", i);
//	}
//}


// 分解质因数
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//	int i = 0;
//	for (i = a; i <= b; i++)
//	{
//		printf("%d=", i);
//		int j, temp = i;
//		for (j = 2; j <= i; j++)
//		{
//			
//			if (temp % j == 0)
//			{
//				printf("%d", j);
//				temp = temp / j;
//				if (temp != i && temp != 1)
//				{
//					j = 1;
//					printf("*");
//				}
//			}
//			if (temp == 1)
//				break;
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>

// 去零数组1
//int main()
//{
//    int i = 0, n, count = 0;
//    int a[100] = { 0 };
//    scanf("%d", &n);
//    for (; i < n; i++)
//        scanf("%d", &a[i]);
//    for (i = 0; i < n; i++)
//    {
//        if (a[i] == 0)
//        {
//            int j = i;
//            for (; j < n - 1; j++)
//            {
//                a[j] = a[j + 1];
//            }
//            i--;
//            count++;
//        }
//    }
//    printf("%d\n", n - count);
//    for (i = 0; i < n - count; i++)
//        printf("%d ", a[i]);
//}

// 去零数组2
//int main()
//{
//    int i = 0, n, count = 0;
//    int a[100] = { 0 };
//    scanf("%d", &n);
//    for (; i < n; i++)
//        scanf("%d", &a[i]);
//    for (i = 0; i < n; i++)
//    {
//        if (a[i] == 0)
//            count++;
//    }
//    printf("%d\n", n - count);
//    for (i = 0; i < n; i++)
//    {
//        if (a[i] != 0)
//        {
//            printf("%d ", a[i]);
//        }
//    }
//}

#include <stdio.h>
#include <string.h>

int main()
{
	char a[100], b[100], c[101] = { 0 };
	scanf("%s", a);
	scanf("%s", b);

	int i, j, sum = 0;
	if (strlen(a) < strlen(b))
	{
		char temp[100] = { 0 };
		strcpy(temp, a);
		strcpy(a, b);
		strcpy(b, temp);
	}
	i = strlen(a) - 1;
	j = strlen(b) - 1;
	for (; i >= 0; i--)
	{
		if (j != -1)
		{
			sum = a[i] - '0' + b[j] - '0' + sum / 10;
			j--;
		}
		else
			sum = a[i] - '0' + sum / 10;
		c[i + 1] = sum % 10 + '0';
	}
	if (sum / 10 != 0)
	{
		c[0] = sum / 10 + '0';
		for (i = 0; i < strlen(a) + 1; i++)
			printf("%c", c[i]);
	}
	else
	{
		for (i = 1; i < strlen(a) + 1; i++)
			printf("%c", c[i]);
	}
}