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
// 
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
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char temp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = temp;
//		buf1++;
//		buf2++;
//	}
//}
//void BubbleSort(void* base, size_t num, size_t width, int (*cmp)(const void*, const void*))
//{
//	size_t i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < num - 1; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int a[10] = { 1,23,4,5,5,45,35,45,436,6 };
//	BubbleSort(a, 10, sizeof(a[0]), cmp1);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	// 在内存中 存放 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	int* str1 = (int*)(&a + 1); // 整个数组加一然后强制转换类型
//
//	printf("%x", str1[-1]);
//}
//int main()
//{
//	int a[5][5];
//  // 该内存 11111  11111  11111  1111  11111   a+1的跨度为5 
//	int(*p)[4];
//  // 该内存 1111 1111 1111 1111    p+1 的跨度为4
//	p = a;
//	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1); // 整个数组加一
//	int* ptr2 = (int*)(*(aa + 1)); // 相当于aa[1]
//	printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1));
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++; // 
//	printf("%s\n", *pa);
//}
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//void dao_xv(char* aa, int a)
//{
//	char b;
//
//	if (aa < aa + a)
//	{
//		b = *aa;
//		*aa = *(aa + a);
//		*(aa + a) = b;
//		dao_xv(aa + 1, a - 2);
//	}
//}
//int main()
//{
//	char aa[] = "abcdefg";
//	int a = strlen(aa) - 1;
//	dao_xv(aa, a);
//	//printf("%c", *aa);
//	printf("%s ", aa);
//}

//int is_left_move(char arr1[], char arr2[])
//{
//
//}
//int main()
//{
//	char arr1[] = "AABCD";
//
//	char arr2[] = "BCDAA";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//}

//void find_k(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] < k)
//			x++;
//		else if (arr[x][y] > k)
//			y--;
//		else
//		{
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 17;
//	int x = 3;
//	int y = 3;
//	find_k(arr, k, &x, &y);
//	if (x == -1 && y == -1)
//		printf("找不到\n");
//	else
//		printf("%d %d\n", x, y);
//}

//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//		;
//	return ret;
//}

//int GreCommon(int a, int b) {
//	int temp, r;
//	if (b > a) {
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	while ((r = b % a) != 0) {
//		b = a;
//		a = r;
//	}
//	return a;
//}
//int main() {
//	int a, b, Great;
//	scanf("%d%d", &a, &b);
//	Great = GreCommon(a, b);
//	printf("%d", Great);
//}


//int main() {
//	int n[20] = { 0 };
//	printf("input a 8 system\n");
//	int a, i = 0, m;
//	scanf("%d", &a);
//	while (a) {
//		if (a % 10 > 7) {
//			printf("输入错误,重新输入！");
//			scanf("%d", &a);
//			continue;
//		}
//		m = a % 10;
//		a = a / 10;
//		if (m == 0) {
//			int j = i;
//			while (i < j + 3) {
//				n[i] = 0;
//				i++;
//			}
//		}
//		while (m) {
//			n[i] = m % 2;
//			m = m / 2;
//			i++;
//		}
//	}
//	for (; i >= 0; i--) {
//		printf("%d", n[i]);
//	}
//}

//int main() {
//	int n[10] = { 0 };
//	printf("input a 10 system\n");
//	int a, i = 0;
//	scanf("%d", &a);
//	while (a) {
//		n[i] = a % 2;
//		a = a / 2;
//		i++;
//	}
//	for (; i >= 0; i--) {
//		printf("%d", n[i]);
//	}
//}

//int isprime(int a) {
//	for (int i = 2; i <= sqrt((double)a); i++) {
//		if (a % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main() {
//	int num, flag;
//	scanf("%d", &num);
//	for (int i = 2; i < num / 2; i++) {
//		if (isprime(i) == 1 && isprime(num - i) == 1) {
//			printf("%d + %d = %d\n", i, num - i, num);
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//		printf("do not have prime!");
//}

//#include<string.h>
//#include<assert.h>
//char* my_strcat(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)
//		dest++;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = { 'd','e','f','\0' };
//	my_strcat(arr1, arr2);
//
//	printf("%s", arr1);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr1[20] = "abcdefghi";
//	char arr2[] = "xxxx";
//	strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<assert.h>
//void* my_memmove(void* dst, const void* src, int count)
//{
//    assert(dst);
//    assert(src);
//    assert(count > 0);
//    char* ret = (char*)dst;
//    if ((dst > src) && (dst < (char*)src + count))
//    {
//        //从后往前拷贝
//        src = (char*)src + count - 1;
//        dst = (char*)dst + count - 1;
//        while (count--)
//        {
//            *(char*)dst = *(char*)src;
//            dst = (char*)dst - 1;
//            src = (char*)src - 1;
//        }
//    }
//    else
//    {
//        //从前往后拷贝
//        while (count--)
//        {
//            *(char*)dst = *(char*)src;
//            src = (char*)src + 1;
//            dst = (char*)dst + 1;
//        }
//    }
//    return ret;
//}
//int main()
//{
//    char arr[] = "abcdefg";
//    char* ret = my_memmove(arr + 1, arr, 3);
//    printf("%s", ret);
//    return 0;
//}

//#include<stddef.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%u\n", offsetof(struct S1, c1));
//	printf("%u\n", offsetof(struct S1, i));
//	printf("%u\n", offsetof(struct S1, c2));
//
//	return 0;
//}

// 位段是可以节省空间的
// 位段 - 二进制位

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//#include<assert.h>
//#include <stdio.h>
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//	while (*dest)
//		dest++;
//	while (*dest++ = *src++)
//		;
//
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abcd";
//
//	my_strcat(arr1, "efg");
//	printf("%s", arr1);
//}

//#include<stdio.h>
//#include<assert.h>
//
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("<\n");
//	else if (ret > 0)
//		printf(">\n");
//	else
//		printf("=\n");
//}

//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while ((*dest++ = *src++) != '\0')
//		;
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "abcde";
//	char arr2[] = "dfdssd";
//
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strlen(char* s1)
//{
//	assert(s1);
//	char* p = s1;
//	while (*s1 != '\0')
//		s1++;
//	return s1 - p;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//
//	printf("%d", my_strlen(arr1));
//}

//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1;
//	char* s2;
//	char* cp = str1;
//	if (*str2 == '\0')
//		return str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cp;
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bc";
//
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("找不到！\n");
//	else
//		printf("%s\n", ret);
//}

//#include<stdio.h>
//#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	my_memcpy(arr1, arr2, 4*sizeof(arr1[0]));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr1[i]);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 4 * sizeof(arr[0]));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}