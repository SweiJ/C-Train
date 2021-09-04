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

//#include<stdio.h>
//int main() {
//    int y, m;
//    while (scanf("%d %d", &y, &m) != EOF)
//    {
//        if (m == 4 || m == 6 || m == 9 || m == 11)
//            printf("30\n");
//        else if (m == 2)
//        {
//            if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//                printf("29\n");
//            else
//                printf("28\n");
//        }
//        else
//            printf("31\n");
//    }
//}


//#define N 10
//int main() {
//	int i, j, a[N][N] = { 0 };
//	for (i = 0; i < N; i++) {
//		a[i][i] = 1;
//		a[i][0] = 1;
//	}
//	for (i = 2; i < N; i++)
//		for (j = 1; j < i; j++)
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//	for (i = 0; i < N; i++) {
//		for (j = 0; j <= i; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//}

//int main()
//{
//	int murder[4] = { 0 };
//
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		murder[i] = 1;
//		if ((murder[0] != 1) + (murder[2] == 1) + (murder[3] == 1) + (murder[3] != 1) == 3)
//			break;
//		murder[i] = 0;
//	}
//	printf("%c", 'A' + i);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[50] = { 0 };
//	gets(arr);
//	int i = 0, k = 0, temp;
//	int len = strlen(arr);
//	scanf("%d", &k);
//	while (k)
//	{
//		temp = arr[0];
//		for (i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[i] = temp;
//		k--;
//	}
//	printf("%s", arr);
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[50] = { 0 };
//	char arr1[50] = { 0 };
//	gets(arr);
//	gets(arr1);
//	int i = 0, k, temp;
//	int arr_len = strlen(arr);
//	int arr1_len = strlen(arr);
//	k = arr_len;
//	while (k)
//	{
//		temp = arr[0];
//		for (i = 0; i < arr_len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[i] = temp;
//		if (strcmp(arr, arr1) == 0)
//		{
//			printf("1");
//			break;
//		}
//		k--;
//	}
//	if(k == 0)
//		printf("0");
//}

//int Find_Num(int arr[3][3], int k, int* pr, int* pc)
//{
//	int x = 0;
//	int y = *pc - 1;
//	while (x <= *pr - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)//列减少
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)//行增加
//		{
//			x++;
//		}
//		else
//		{
//			//返回下标
//			*pr = x;
//			*pc = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };//定义一个3×3的数组
//	int k = 0;
//	scanf("%d", &k);
//	int row = 3;
//	int col = 3;
//	int ret = Find_Num(arr, k, &row, &col);//传地址过去，可以获得下标
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标为：%d,%d", row, col);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


// 函数栈帧问题举例
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = Add(a, b);
//	printf("%d", c);
//}

//int main() {
//	int i, j, n; 
// double sum = 0, mul = 1;
//	printf("请输入阶层数：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		mul *= i;
//		sum += mul;
//	}
//	printf("%f", sum);
//}

//#include<stdio.h> 
//#include<stdlib.h> 
//#include<math.h> 
//#include<string.h> 
//
//int cmp1(const void* a, const void* b)
//{
//    return (*(int*)a - *(int*)b);//a>b 返回正值 
//}
//
//int cmp2(const void* a, const void* b)
//{
//    return(*(char*)a - *(char*)b);
//}
//int cmp3(const void* a, const void* b)
//{
//    if (fabs(*(double*)a - *(double*)b) < 1 * exp(-20))
//        return 0;
//    else
//        return(((*(double*)a - *(double*)b) > 0) ? 1 : -1);
//}
//void main(void)
//{
//    int i;
//    int num[10] = { 10,111,12,23,24,445,56,47,68,9 };
//    char str[10] = { 'a','m','y','d','w','f','g','j','i','p' };
//    double dec[10] = { 1.2,2.2,3.3,1.5,0.5,1.8,2.4,8.9,9.9,5.2 };
//    
//
//    qsort(num, 10, sizeof(int), cmp1);
//    qsort(str, 10, sizeof(char), cmp2);
//    qsort(dec, 10, sizeof(double), cmp3);
//
//    for (i = 0; i < 10; i++)
//        printf("%d ", num[i]);
//    printf("\n");
//    for (i = 0; i < 10; i++)
//        printf("%c ", str[i]);
//    printf("\n");
//    for (i = 0; i < 10; i++)
//        printf("%lf ", dec[i]);
//}





//int main() {
//	for (int num = 2; num < 1000; num++) {
//		int perfectNum = 0;
//		for (int factor = 1; factor <= num / 2; factor++)
//			if (num % factor == 0)
//				perfectNum += factor;
//		if (perfectNum == num) {
//			printf("%d its factors are", num);
//			for (int factor = 1; factor <= num / 2; factor++)
//				if (num % factor == 0)
//					printf("%d, ", factor);
//			printf("\n");
//		}
//	}
//}

//int main() {
//	int num, i, dayNum = 1;
//	for (i = 1; i < 10; i++) {
//		num = (dayNum+1)*2;
//		dayNum = num;
//	}
//	printf("%d", num);
//}

//#include <stdio.h>
//int Over(int arr[])//判断数组内的值是否有重复的
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 5; i++)
//        for (j = i + 1; j < 5; j++)
//        {
//            if (arr[i] == arr[j])
//                return 0;
//        }
//    return 1;
//}
//
//int main()
//{
//    //数组arr[0]~arr[4]分别代表A B C D E
//    //arr[i]的值表示其名次 
//    int arr[5] = { 0 };
//    for (arr[0] = 1; arr[0] <= 5; arr[0]++)
//        for (arr[1] = 1; arr[1] <= 5; arr[1]++)
//            for (arr[2] = 1; arr[2] <= 5; arr[2]++)
//                for (arr[3] = 1; arr[3] <= 5; arr[3]++)
//                    for (arr[4] = 1; arr[4] <= 5; arr[4]++) {
//                        if ((arr[1] == 2) + (arr[0] == 3) == 1
//                            && (arr[1] == 2) + (arr[4] == 4) == 1
//                            && (arr[2] == 1) + (arr[3] == 2) == 1
//                            && (arr[2] == 5) + (arr[3] == 3) == 1
//                            && (arr[4] == 4) + (arr[0] == 1) == 1)
//                            if (Over(arr) != 0)
//                                printf("A:%d B:%d C:%d D:%d E:%d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//                    }
//    return 0;
//}