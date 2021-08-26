#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//    int i, j, n = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i == 0 || i == n - 1)
//                printf("* ");
//            else if (j == 0 || j == n - 1)
//                printf("* ");
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
//}

//#include <stdio.h>
//int main()
//{
//    int score[7] = { 0 };
//    int i, max, min, sum = 0;
//    for (i = 0; i < 7; i++)
//        scanf("%d", &score[i]);
//    max = min = score[0];
//    for (i = 0; i < 7; i++)
//    {
//        if (max < score[i])
//            max = score[i];
//        if (min > score[i])
//            min = score[i];
//        sum += score[i];
//    }
//    printf("%.2f", (sum - max - min) / 5.0);
//}

//# include <stdio.h>
//int main(void)
//{
//    int a[] = { 55,63,5,566,25,48,33,66,59,222,210,900 };
//    int i, j, buf; 
//    int n = sizeof(a) / sizeof(a[0]);
//    for (i = 0; i < n - 1; ++i)  //比较n-1轮
//    {
//        for (j = 0; j < n - 1 - i; ++j)  //每轮比较n-1-i次,
//        {
//            if (a[j] < a[j + 1])
//            {
//                buf = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = buf;
//            }
//        }
//    }
//    for (i = 0; i < n; ++i)
//    {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    return 0;
//}


//#include <stdio.h>
//#define N 5
//int exchange(int* a, int* b)
//{
//	int temp;
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		temp = *(a + i);
//		*(a + i) = *(b + i);
//		*(b + i) = temp;
//	}
//}
//int main()
//{
//	int a[N] = { 55,65,56,222,33 };
//	int b[N] = { 100,55,11,80,90 };
//	int i = 0;
//	exchange(a, b);
//	for (i = 0; i < N; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	for (i = 0; i < N; i++)
//		printf("%d ", b[i]);
//}