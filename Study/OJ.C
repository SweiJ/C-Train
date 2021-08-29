#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <string.h>
//int reverseStr(char arr[], int len)
//{
//	int i = 0;
//	for (i = len - 1; i >= 0; i--)
//	{
//		printf("%c", *(arr + i));
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reverseStr(arr, len);
//}

//#define N 13
//int main()
//{
//	int i, j, k;
//
//	char a[N][N] = { 0 };
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < N; j++)
//			a[i][j] = ' ';
//	}
//	for (i = 0; i < N / 2 + 1; i++)
//		for (j = N / 2 - i; j < N / 2 + 1 + i; j++) {
//			a[i][j] = '*';
//			a[N - 1 - i][j] = '*';
//		}
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < N; j ++)
//			printf("%c", a[i][j]); 
//		printf("\n");
//	}
//}

//int main()
//{
//	int water = 0, money = 0, empty = 0;
//	scanf("%d", &money);
//	water = money;
//	empty = money;
//	while (empty > 1)
//	{
//		water += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", water);
//}

//int main()
//{
//	int arr[10] = { 12,2,3,4,5,6,7,81,9,10 };
//	int temp[10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	for (i = 0; i < 10; i++)
//		temp[i] = arr[i];
//
//	for (i = 0; i < 10; i++)
//	{
//		if (temp[i] % 2 == 1)
//			arr[j++] = temp[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (temp[i] % 2 == 0)
//			arr[j++] = temp[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//int len(char* str) {
//	char* i = str;
//	int strLen;
//	while (*str != '\0') str++;
//	strLen = str - i;
//	return strLen;
//}
//int main() {
//	char a[20] = { 0 };
//	char* p = a;
//	int strLen;
//	gets(a);
//	strLen = len(p);
//	printf("%d", strLen);
//}


//#include<stdio.h>
//#include<assert.h>
//char* mystrcpy(char* _Dest, const char* _Source)
//{
//    //检查传入参数的有效性
//    assert(NULL != _Dest);
//    assert(NULL != _Source);
//    if (NULL == _Dest || NULL == _Source)
//        return NULL;
//    char* ret = _Dest;
//    while ((*_Dest++ = *_Source++) != '\0');
//    return ret;
//}
//int main()
//{
//	char S1[20] = "hello";
//	char S2[20] = "world";
//
//	mystrcpy(S1, S2);
//	printf("S1 = %s\n", S1);
//
//	return 0;
//}

#include<stdio.h>
int main() {
    int y, m;
    while (scanf("%d %d", &y, &m) != EOF)
    {
        if (m == 4 || m == 6 || m == 9 || m == 11)
            printf("30\n");
        else if (m == 2)
        {
            if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
                printf("29\n");
            else
                printf("28\n");
        }
        else
            printf("31\n");
    }
}