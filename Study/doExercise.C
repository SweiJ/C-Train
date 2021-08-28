#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//    char alph = '\0';
//    while (scanf(" %c", &alph) != EOF)
//    {
//        getchar();
//        if (alph == 'a' || alph == 'A' ||
//            alph == 'e' || alph == 'E' ||
//            alph == 'i' || alph == 'I' ||
//            alph == 'o' || alph == 'O' ||
//            alph == 'u' || alph == 'U')
//        {
//            printf("Vowel\n");
//        }
//        else
//            printf("Consonant\n");
//    }
//}

//#include <stdio.h>
//int main()
//{
//    int a[20][20], b[20][20];
//    int i, j, n, m, flag = 1;
//    scanf("%d%d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &b[i][j]);
//            if (a[i][j] != b[i][j])
//                flag = 0;
//        }
//    }
//    if (flag)
//        printf("Yes\n");
//    else
//        printf("No\n");
//}

//int main()
//{
//    int m, n;
//    int a[20][20] = { 0 };
//    scanf("%d %d", &m, &n);
//    for (int i = 0; i < m; i++)
//        for (int j = 0; j < n; j++)
//            scanf("%d", &a[i][j]);
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("%d ", a[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}

//int main()
//{
//	int i, sum = 0, a = 0, temp = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		temp = temp * 10 + a;
//		sum += temp;
//	}
//	printf("%d", sum);
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int sum = 0;
//		int n = 0;
//		int temp = i;
//		while (temp)
//		{
//			temp = temp / 10;
//			n++;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp = temp / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//}
