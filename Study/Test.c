#define _CRT_SECURE_NO_DEPRECATE
//#include <string.h>
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>

// ���ͼ�� һ��5��

//int main() {	
//	int i, blank;
//	for (i = 0; i < 4; i++){
//		blank = i * 2;
//		while(blank--)
//			putchar(' ');
//		printf("*****");
//		if(i < 3)
//			putchar('\n');
//	}
//}

// ��100-200����������֮��

//int main() {   
//    int i, j, flag, sum = 0;
//    for (i = 100; i <= 200; i++){
//        flag = 0;
//        for (j = 2; j <= sqrt(i); j++)
//            if (i % j == 0){
//                flag = 1;
//                break;
//            }
//        if (flag == 0){
//            sum += i;
//            printf("%d  ", i);
//        }
//    }
//    printf("\n%d", sum);
//    return 0;
//}

// ���1900-2000��������������

//int main() {	
//	int Year;
//	for (Year = 1900; Year <= 2000; Year++)
//		if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
//			printf("%d  ", Year);
//	return 0;
//}

//int main() {  // ��������
//	float growRate = 0.07, Year = 10, p;
//	p = pow(1 + growRate, Year);
//	printf("%f", p);
//}

// ��Բ���ܳ��������Բ�������԰�����

//int main() {
//	float pi = 3.14;
//	float r, h;
//	printf("������뾶�͸߶ȣ�");
//	scanf("%f %f", &r, &h);
//	float CirFerence = 2 * pi * r; // Բ�ܳ�
//	float CirArea = pi * r * r; // Բ���
//	float Surface_area = 4 * pi * r * r; // Բ������
//	float SphereVolum = 4 / 3 * pi * r * r; // Բ�����
//	float CylinderVolum = pi * r * r * h; // Բ�����
//
//	printf("Բ�ܳ���%.2f\n", CirFerence);
//	printf("Բ�����%.2f\n", CirArea);
//	printf("Բ��������%.2f\n", Surface_area);
//	printf("Բ�������%.2f\n", SphereVolum);
//	printf("Բ�������%.2f\n", CylinderVolum);
//}

//int main() {
//	int num, squarefx;
//	printf("������һ��С��1000��������");
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num < 1000 && num > 0)
//		{
//			squarefx = sqrt(num);
//			printf("%d", squarefx);
//			break;
//		}
//		else
//		{
//			printf("������������������������룺");
//			scanf("%d", &num);
//		}
//	}
//}

//int main() {
//	int num, i = 0, a;
//	printf("���벻����5λ������������");
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d", num % 10);
//		num /= 10;
//		i++;
//	}
//	printf("��%dλ��", i);
//}

//int main() {
//	char a[20] = { 0 };
//	char* p;
//	p = a;
//	int alphNum = 0, Num = 0, spacNum = 0, OtherChara = 0;
//	gets(p);
//	while (*p) {
//		if (*p >= 'A' && *p <= 'Z' || *p >= 'a' && *p <= 'z')
//			alphNum++;
//		else if (*p == ' ')
//			spacNum++;
//		else if (*p > '0' && *p < '9')
//			Num++;
//		else
//			OtherChara++;
//		p++;
//	}
//	printf("Ӣ���ַ�����Ϊ��%d\n", alphNum);
//	printf("�����ַ�����Ϊ��%d\n", Num);
//	printf("�ո��ַ�����Ϊ��%d\n", spacNum);
//	printf("�����ַ�����Ϊ��%d\n", OtherChara);
//}

// ��a+aa+aaa+aaaa... aΪÿλ���� nΪ����

//int main() {	
//	int a, n, i, sum = 0, record;
//	printf("���������ֺ�λ����");
//	scanf("%d%d", &a, &n);
//	record = 0;
//	for (i = 0; i < n; i++) {
//		record = a * pow(10, i) + record;
//		sum += record;
//	}
//	printf("%d", sum);
//}

// ��1��+2��+3��+...+n!

//int main() {
//	int i, j, n; 
// double sum = 0, mul = 1;
//	printf("������ײ�����");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		mul *= i;
//		sum += mul;
//	}
//	printf("%f", sum);
//}

// ��1-100 i���ۼӺ�   1-50 iƽ���ۼӺ�   1-10 i��֮1�ۼӺ�

//int main() {
//	double sum1 = 0.0, sum2 = 0.0, sum3 = 0.0, total_sum = 0.0;
//	int i;
//	for (i = 1; i <= 100; i++) {
//		sum1 += i;
//		if (i <= 50)
//			sum2 += i*i;
//		if (i <= 10)
//			sum3 += 1.0 / i;
//	}
//	total_sum = sum1 + sum2 + sum3;
//	printf("�ܺ�Ϊ%f", total_sum);
//}

// ��ӡ���е�ˮ�ɻ���

//int main() {
//	int num = 0, i;
//	for (i = 100; i < 1000; i++) {
//		if (pow(i % 10, 3) + pow(i / 10 % 10, 3) + pow(i / 100, 3) == i) {
//			printf("%d ", i);
//		}
//	}
//	printf("��ˮ�ɻ�����");
//}

// ��1000���ڵ����� �������������������ӵĺ�

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

// 2/1,3/2,5/3,8/5...ǰ20���

//int main() {
//	double Denomiator = 1.0, Numerater = 2.0, sum = 0.0, tmp = 0.0;
//	for (int i = 0; i < 20; i++) {
//		sum += Numerater / Denomiator;
//		tmp = Numerater;
//		Numerater = Numerater + Denomiator;
//		Denomiator = tmp;
//	}
//	printf("%f", sum);
//}


// һ�����100������ ÿ����ط�����һ�ε�һ��
// ��10�������� �Լ���10�η����ĸ߶�

//int main() {
//	float meter = 100, i = 2, high = 100 / 2;
//	while (i <= 10) {
//		meter += 2 * high;
//		high /= 2;
//		i++;
//	}
//	printf("%f, %f",  meter, high);
//}


// ���ӳ�������

//int main() {
//	int num, i, dayNum = 1;
//	for (i = 1; i < 10; i++) {
//		num = (dayNum+1)*2;
//		dayNum = num;
//	}
//	printf("%d", num);
//}

// �õ������� x = ����a         �ص�
//(1)�趨һ��x�ĳ�ֵx0;
//(2)�����Ϲ�ʽ���x����һ��ֵx1;
//(3���ٽ�x1���������Ϲ�ʽ�Ҳ��:, ���x����һ��ֵx2;
//(4����˼�����ȥ, ֱ��ǰ�����������xֵ(xn ��xn+1)�������¹�ϵ:
// fabs(x0 - x1) >= 1e-5

//int main() {
//	float a, x0, x1;
//	printf("enter a positive number:");
//	scanf("%f", &a);
//	x0 = a / 2;
//	x1 = (x0 + a / x0) / 2;
//	do
//	{
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2;
//	} while (fabs(x0 - x1) >= 1e-5);
//	printf("The square fx of %5.2f is %8.5f\n", a, x1);
//}

// ��2x^3-4x^2+3x-6 = 0 ��1.5�����ĸ�

//int main() {
//	double x1, x0, f, f1;
//	x1 = 1.5;
//	do {
//		x0 = x1;
//		f = ((2 * x0 - 4) * x0 + 3) * x0 - 6; // ԭʽ��ת��
//		f1 = (6 * x0 - 8) * x0 + 3; // ����
//		x1 = x0 - f / f1;
//	} while (fabs(x1 - x0) >= 1e-5);
//	printf("The fx of equation is %5.2f\n", x1);
//}

// ��2x^3-4x^2+3x-6 = 0 ��[-10,10]֮��ĸ�

//int main() {
//	float right, left, mid, fx, fx1, fx2;
//	do {
//		printf("����һ����Χ");
//		scanf("%f%f", &right, &left);
//		fx1 = ((2 * right - 4) * right + 3) * right - 6;
//		fx2 = ((2 * left - 4) * left + 3) * left - 6;
//	} while (fx1 * fx2 > 0);
//	do {
//		mid = (right + left) / 2;
//		fx = ((2 * mid - 4) * mid + 3) * mid - 6;
//		if ((fx * fx1 < 0)) {
//			left = mid;
//			fx2 = fx;
//		}
//		else {
//			right = mid;
//			fx1 = fx;
//		}
//	} while (fabs(fx) >= 1e-5);
//	printf("x=%6.2f\n", mid);
//}

// ���ͼ��

//int main() {
//	int i, j, k;
//	for (i = 0; i <= 3; i++) {
//		for (j = 0; j <= 2 - i; j++)
//			printf(" ");
//		for (k = 0; k <= 2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 0; i <= 2; i++) {
//		for (j = 0; j <= i; j++)
//			printf(" ");
//		for (k = 0; k <= 4 - 2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//}
//#define N 7
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

// ��������

//int main() {
//	char i, j, k; // i��A����j��B����k��C����
//	for (i = 'x'; i <= 'z'; i++)
//		for (j = 'x'; j <= 'z'; j++)
//			if (i != j)
//				for (k = 'x'; k <= 'z'; k++)
//					if (i != k && j != k)
//						if (i != 'x' && k != 'x' && k != 'z')
//							printf("A--%c\nB--%c\nC--%c\n", i, j, k);
//}

// ��ɸѡ����100���ڵ�����

//int main() {
//	int i, j, n, a[101];
//	for (i = 1; i <= 100; i++)
//		a[i] = i;
//	a[1] = 0;
//	for (i = 2; i < sqrt(100); i++) {
//		if (a[i] == 0)
//			continue;
//		for (j = i + 1; j <= 100; j++)
//			if (a[j] % a[i] == 0 && a[j] != 0)
//				a[j] = 0;
//	}
//	for (i = 2, n = 0; i <= 100; i++) {
//		if (a[i] != 0) {
//			printf("%5d ", a[i]);
//			n++;
//		}
//		if (n == 10) {
//			printf("\n");
//			n = 0;
//		}
//	}
//	printf("\n");
//}

// ѡ������

//#define N 10
//int main() {
//	int a[N] = { 0 };
//	int i, j, max, temp;
//	int size = sizeof(a) / sizeof(a[0]);
//	for (i = 0; i < size; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < size; i++) {
//		max = 0;
//		for (j = 1; j < size - i; j++)
//			if (a[max] < a[j])
//				max = j;
//		temp = a[N - 1 - i];
//		a[N - 1 - i] = a[max];
//		a[max] = temp;
//	}
//	for (i = 0; i < size; i++)
//		printf("%d ", a[i]);
//}

// 3��3�Խ��ߺ�

//#define N 3
//int main() {
//	int a[N][N] = { 0 };
//	int i, j, RightSum = 0, LeftSum = 0;
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			scanf("%d", &a[i][j]);
//	for (i = 0; i < N; i++) {
//		RightSum += a[i][i];
//		LeftSum += a[i][N - 1 - i];
//	}
//	printf("%d\n%d", RightSum, LeftSum);
//}

// һ����õ��������һ��Ԫ��

//int main() {
//	int a[11] = { 1,2,3,4,5,6,7,8,9,10 };
//	int data, i, j, size;
//	printf("������һ�����ݣ�");
//	scanf("%d", &data);
//	size = sizeof(a) / sizeof(a[0]);
//	if (data >= a[size - 1])
//		a[size - 1] = data;
//	for (i = 0; i < size; i++) {
//		if (data < a[i] && a[size-1] == 0) {
//			for (j = size-2; j >= i; j--)
//				a[j + 1] = a[j];
//			a[j+1] = data;
//			break;
//		}
//	}
//	for (i = 0; i < size; i++) {
//			printf("%d", a[i]);
//	}
//}

// ��ԭ���������ӡ

//#define N 5
//int main() {
//	int a[N] = { 0 };
//	int i, temp;
//	printf("enter a arry");
//	for (i = 0; i < N; i++)
//		scanf("%d", &a[i]);
//	printf("print arry:");
//	for (i = 0; i < N; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	for (i = 0; i < N / 2; i++) {
//		temp = a[i];
//		a[i] = a[N - 1 - i];
//		a[N - 1 - i] = temp;
//	}
//	printf("revers arry is:");
//	for (i = 0; i < N; i++)
//		printf("%d ", a[i]);
//}

// ����������

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

// ħ����ʵ��

//#define N 15
//int main() {
//	int a[N][N], i, j, k, p, n;
//	p = 1;
//	while (p == 1) {
//		printf("enter n(n=1--15):");
//		scanf("%d", &n);
//		if ((n != 0) && (n <= 15) && (n % 2 != 0))
//			p = 0;
//	}
//	for (i = 1; i <= n; i++)
//		for (j = 1; j <= n; j++)
//			a[i][j] = 0;
//	j = n / 2 + 1;
//	a[1][j] = 1;
//	for (k = 2; k <= n*n; k++) {
//		i = i - 1;
//		j = j + 1;
//		if ((i < 1) && (j > n)) {
//			i = i + 2;
//			j = j - 1;
//		}
//		else {
//			if (i < 1) i = n;
//			if (j > n)j = 1;
//		}
//		if (a[i][j] == 0)
//			a[i][j] = k;
//		else {
//			i = i + 2;
//			j = j - 1;
//			a[i][j] = k;
//		}
//	}
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n; j++)
//			printf("%5d", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

// ���ά���鰰��

//#define N 3
//#define M 3
//int main() {
//	int a[N][M] = { 1,23,49,6,99,6,5,26,77 };
//	int i, j, k, flag, SadPoint, maxList;
//	for (i = 0; i < N; i++) {
//		SadPoint = a[i][0];
//		maxList = 0;
//		for (j = 0; j < M; j++)
//			if (a[i][j] > SadPoint) {
//				SadPoint = a[i][j];
//				maxList = j;
//			}
//	
//		flag = 1;
//		for(k = 0;k<N;k++)
//			if (SadPoint > a[k][maxList]) {
//				flag = 0;
//				continue;
//			}
//		if (flag) {
//			printf("a[%d]a[%d] = %d\n", i, maxList, SadPoint);
//			break;
//		}	
//	}
//	if (!flag)
//		printf("It is not exist!\n");
//}

// �۰�����ҳ������е�λ��

//int main() {
//	int a[15] = { 120,110,100,99,88,77,66,55,44,33,22,11,9,6,6 };
//	int right, left, mid, i, size, num;
//	size = sizeof(a) / sizeof(a[0]);
//	left = 0;
//	right = size - 1;
//	printf("����һ������");
//	scanf("%d", &num);
//	mid = (right + left) / 2;
//	while (left <= right) {
//		if (a[mid] > num)
//			left = mid + 1;
//		else if (a[mid] < num)
//			right = mid - 1;
//		else
//			break;
//		mid = (right + left) / 2;
//	}
//	if (a[mid] == num)
//		printf("��%d��", mid+1);
//	else
//		printf("�޴���");
//}

// ��3�� ÿ��80���� �����е��ַ�����

//#define N 3
//#define M 80
//int main() {
//	char a[N][M];
//	int capital, lowercase, num, space, other, i, j;
//	capital = lowercase = num = space = other = 0;
//	for (i = 0; i < N; i++) {
//		gets(a[i]);
//		for (j = 0; j<M && a[i][j] != '\0'; j++) {
//			if (a[i][j] >= 'A' && a[i][j] <= 'Z')
//				capital++;
//			else if (a[i][j] >= 'a' && a[i][j] <= 'z')
//				lowercase++;
//			else if (a[i][j] >= '0' && a[i][j] <= '9')
//				num++;
//			else if (a[i][j] >= ' ')
//				space++;
//			else
//				other++;
//		}
//		printf("��%d�д�д��ĸ�У�%d\n", i + 1, capital);
//		printf("��%d��Сд��ĸ�У�%d\n", i + 1, lowercase);
//		printf("��%d�������У�%d\n", i + 1, num);
//		printf("��%d�пո��У�%d\n", i + 1, space);
//		printf("��%d�������ַ���%d\n", i + 1, other);
//	}
//}

// һ��5��*��

//int main() {
//	int i, j, num;
//	for (i = 0; i < 5; i++) {
//		num = 5;
//		j = i;
//		while (j) {
//			printf(" ");
//			j--;
//		}
//		while ( j==0 && num--)
//			printf("*");
//		printf("\n");
//	}
//}

// �������

//int main() {
//	char a[10];
//	int i;
//	gets(a);
//	printf("%s", a);
//	for (i = 0; i < 10; i++) {
//		if (a[i] >= 'a' && a[i] <= 'z')
//			a[i] = 219 - a[i];
//		else if (a[i] >= 'A' && a[i] <= 'Z')
//			a[i] = 155 - a[i];
//	}
//	printf("\n%s", a);
//}

// ����strcat���������ַ���

//int main() {
//	char a[80] = { 0 }, b[40] = { 0 };
//	int i = 0, j = 0;
//	printf("������Ŀ���ַ�����");
//	gets(a);
//	printf("������Դ�ַ�����");
//	gets(b);
//	while (a[i] != '\0')
//		i++;
//	while (b[j] != '\0')
//		a[i++] = b[j++];
//	a[i] = '\0';
//	printf("The new string is:%s", a);
//}

// �Ƚ������ַ�������strcmp

//int main() {
//	char a[20] = { 0 }, b[20] = { 0 };
//	int i = 0, ret = 0;
//	printf("�����һ���ַ�����");
//	gets(a);
//	printf("����ڶ����ַ�����");
//	gets(b);
//	while (b[i] != '\0' && a[i] != '\0') {
//		ret = a[i] - b[i];
//		if (0 != ret)
//			break;
//		i++;
//	}
//		printf("result: %d", ret);
//}

//int main() {
//	char a[20] = { 0 }, b[20] = { 0 };
//	int i = 0, j;
//	printf("����һ���ַ�����");
//	gets(b);
//	while (b[i] != '\0') {
//		a[i] = b[i];
//		i++;
//	}
//	printf("%s", a);
//}

// �����������Լ������С������

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
//int LowCommon(int a, int b, int h) {
//	return (b * a / h);
//}
//int main() {
//	int a, b, Great, Low;
//	scanf("%d%d", &a, &b);
//	Great = GreCommon(a, b);
//	Low = LowCommon(a, b, Great);
//	printf("%d %d", Great, Low);
//}

// ��ax^2+bx+c = 0 b^2-4ac����С�ڵ���0�ĸ�

//int fun1(double a, double b, double d)
//{
//    double x1, x2;
//    x1 = (b + sqrt(d)) / (-1 * 2 * a);
//    x2 = (b - sqrt(d)) / (-1 * 2 * a);
//    printf("%lf%lf", x1, x2);
//}
//int fun2(double a, double b, double d)
//{
//    double x1, x2;
//    x1 = x2 = (b + sqrt(d)) / (-2 * a);
//    printf("%lf%lf", x1, x2);
//}
//int fun3(double a, double b, double d)
//{
//    double x1, x2, y1, y2;
//    x1 = (-b) / (2 * a);
//    y1 = sqrt(-d) / (2 * a);
//    x2 = (-b) / (2 * a);
//    y2 = sqrt(-d) / (2 * a);
//    printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi", x1, y1, x2, y2);
//}
//int main()
//{
//    double a, b, c, d;
//    double x1, x2;
//    scanf("%lf%lf%lf", &a, &b, &c);
//    d = b * b - 4 * a * c;
//    if (d > 0)
//        fun1(a, b, d);
//    if (d == 0)
//        fun2(a, b, d);
//    if (d < 0)
//        fun3(a, b, d);
//    return 0;
//}

// �������ַ���

//void inverse(char inverStr[]) {
//	char t;
//	int i, j;
//	for (i = 0, j = strlen(inverStr); i < (strlen(inverStr) / 2); i++, j--) {
//		t = inverStr[i];
//		inverStr[i] = inverStr[j - 1];
//		inverStr[j - 1] = t;
//	}
//}
//int main() {
//	char str[100];
//	printf("input string");
//	gets(str);
//	inverse(str);
//	printf("inverse string:%s", str);
//}

// Ѱ���ַ��������һ���ַ� *

//void findMaxstr(char str[], char str1[]) {
//	int i = 0, j = 0, num = 0;
//	while (str[i] != '\0') {
//		while (str[j] != ' ' && str[j] != '\0')
//			j++;
//		num = j - i;
//		if (strlen(str1) < num) {
//			strncpy(str1, str + i, num);
//		}
//		j++;
//		i = j;
//	}
//}
//int main() {
//	char str[100] = { 0 };
//	char str1[50] = { 0 };
//	gets(str);
//	findMaxstr(str, str1);
//	printf("long str is:%s", str1);
//}

// ʵ��strncpy

//int main() {
//	char a[10] = { 0 }, b[10] = { 0 };
//	char* p , * q;
//	int index;
//	gets(a);
//	puts(a);
//	printf("���뿪ʼ���Ƶ�λ�ã�");
//	scanf("%d", &index);
//	p = a+index;
//	q = b;
//	while (*p != '\0') {
//		*q = *p;
//		p++;
//		q++;
//	}
//	*q = '\0';
//	puts(b);
//}

// ����3����������С����˳�����

//int main() {
//	int a, b, c, temp;
//	scanf("%d%d%d", &a, &b, &c);
//	int* aPoint = &a, * bPoint = &b, *cPoint = &c;
//	if (*aPoint > *bPoint) {
//		temp = *bPoint;
//		*bPoint = *aPoint;
//		*aPoint = temp;
//	}
//	if (*aPoint > *cPoint) {
//		temp = *cPoint;
//		*cPoint = *aPoint;
//		*aPoint = temp;
//	}
//	if (*bPoint > *cPoint) {
//		temp = *cPoint;
//		*cPoint = *bPoint;
//		*bPoint = temp;
//	}
//	printf("%d %d %d", a, b, c);
//}

// ���������ַ�������С����˳�����

//int main() {
//	char a[10] = { 0 }, b[10] = { 0 }, c[10] = { 0 };
//	char* apoint = a, * bpoint = b, * cpoint = c, p[10] = { 0 };
//	gets(a);
//	gets(b);
//	gets(c);
//	//if (strcmp(apoint, bpoint) > 0) {
//	//	strcpy(p, bpoint);
//	//	strcpy(bpoint, apoint);
//	//	strcpy(apoint, p);
//	//}
//	//if (strcmp(apoint, cpoint) > 0) {
//	//	strcpy(p, cpoint);
//	//	strcpy(cpoint, apoint);
//	//	strcpy(apoint, p);
//	//}
//	//if (strcmp(bpoint, cpoint) > 0) {
//	//	strcpy(p, cpoint);
//	//	strcpy(cpoint, bpoint);
//	//	strcpy(bpoint, p);
//	//}
//	while (*apoint != '\0' || *bpoint != '\0')
//		if (*apoint++ > *bpoint++) {
//			apoint = a;
//			bpoint = b;
//			strcpy(p, apoint);
//			strcpy(apoint, bpoint);
//			strcpy(bpoint, p);
//			break;
//		}
//		else if (*apoint++ < *bpoint++)
//			break;
//	while (*apoint != '\0' || *cpoint != '\0')
//		if (*apoint++ > *cpoint++) {
//			apoint = a;
//			cpoint = c;
//			strcpy(p, apoint);
//			strcpy(apoint, cpoint);
//			strcpy(cpoint, p);
//			break;
//		}
//		else if (*apoint++ < *cpoint++)
//			break;
//	while (*bpoint != '\0' || *cpoint != '\0')
//		if (*bpoint++ > *cpoint++) {
//			bpoint = b;
//			cpoint = c;
//			strcpy(p, bpoint);
//			strcpy(bpoint, cpoint);
//			strcpy(cpoint, p);
//			break;
//		}
//		else if (*bpoint++ < *cpoint++)
//			break;
//	printf("%s\n%s\n%s", a, b, c);
//}

//#define N 5
//
//int fun(int b[N][N]) {
//	int(*p)[] = b;
//	int(*q)[] = b;
//}
//int main() {
//	int a[N][N] = { 0 };
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			scanf("%d", a[i][j]);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++)
//			printf("%d", a[i][j]);
//		printf('\n');
//	}
//		
//	fun((int*)a);
//}

// ����10��������С���һ�������� ���������һ������

//void scan(int a[], int n) {
//	for (int i = 0; i < n; i++)
//		scanf("%d", a +i);
//}
//void fun(int b[], int n) {
//	int max = *b;
//	int min = *b;
//	int maxIndex = 0, minIndex = 0, temp;
//	for (int i = 0; i < n; i++) {
//		if (*(b + i) > max) {
//			max = *(b + i);
//			maxIndex = i;
//		}
//		if (*(b + i) < min) {
//			min = *(b + i);
//			minIndex = i;
//		}
//	}
//	if (*b != max) {
//		temp = *b;
//		*b = *(b + minIndex);
//		*(b + minIndex) = temp;
//		max = minIndex;
//	}
//	temp = *(b + n - 1);
//	*(b + n - 1) = *(b + maxIndex);
//	*(b + maxIndex) = temp;
//}
//void print(int a[], int n) {
//	for (int i = 0; i < n; i++)
//		printf("%d ", a[i]);
//}
//int main() {
//	int a[10] = { 0 };
//	int size = sizeof(a) / sizeof(a[0]);
//	scan(a, size);
//	fun(a, size);
//	print(a, size);
//}

// ��n�����ֵ����飬����m��λ���ƶ���ǰ�棬ǰ�����������

//void fun(int arr[], int n) {
//	int m, temp, i, index;
//	printf("�����ƶ��ĸ���");
//	scanf("%d", &m);
//	index = m;
//	while (m) {
//		temp = *(arr + n - m);
//		for (i = n - m; i > index - m; i--)
//			*(arr + i) = *(arr + i - 1);
//		*(arr + i) = temp;
//		m--;
//	}
//}
//int main() {
//	int num[20] = { 0 };
//	int n;
//	printf("���������ĸ�����");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", num + i);
//	fun(num, n);
//	for (int i = 0; i < n; i++)
//		printf("%3d", *(num + i));
//}

// n����Χ��һȦ 1-3�������������޳�


//int main() {
//	int n, i, a[20] = { 0 }, *p;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		a[i] = i + 1;
//	int remain = n;
//	int num_off = 0;
//	while (remain > 1) {
//		p = a;
//		while (p != a + n) {
//			
//			if (*p != 0) {
//				num_off++;
//				if (num_off == 3) {
//					*p = 0;
//					num_off = 0;
//					remain--;
//				}
//			}
//			p++;
//		}
//	}
//	for (i = 0; i < n; i++) {
//		if (a[i] != 0)
//			printf("%d", a[i]);
//	}
//}

// ���ַ�������

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

// ʵ��strncpy

//void my_strncpy(char* pstr1, char* pstr2, int m) {
//	while (*pstr2 != '\0') {
//		*pstr1 = *(pstr2 + m);
//		pstr2++;
//		pstr1++;
//	}
//	*pstr1 = '\0';
//}
//int main() {
//	char str1[20] = { 0 };
//	char str2[20] = { 0 };
//	char* pstr1 = str1, * pstr2 = str2;
//	int n;
//	printf("����Դ�ַ�����");
//	gets(str2);
//	printf("�����Դ�ַ����ڼ�����ʼ��ֵ");
//	scanf("%d", &n);
//	my_strncpy(str1, str2, n);
//	puts(str1);
//}

// 3��3����ת��

//#define N 3
//#define M 3
//void fun(int(*arr)[M]) {
//	int temp;
//	int arr2[M][N] = { 0 };
//	int(*p)[N] = arr2;
//	for (int i = 0; i < N; i++)
//		for (int j = i + 1; j < M; j++) {
//			temp = *(*(arr + i) + j);
//			*(*(arr + i) + j) = *(*(arr + j) + i);
//			*(*(arr + j) + i) = temp;
//		}
//}
//int main() {
//	int a[N][M] = { 0 };
//	int (*p)[M] = a;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			scanf("%d", *(a + i) + j);
//	fun(a);
//	printf("\n");
//	for (int i = 0; i < N; i++){
//		for (int j = 0; j < M; j++)
//			printf("%3d", *(*(a + i) + j));
//		printf("\n");
//	}
//}

// 5��5���������м�

//#define N 5
//int fun(int arr[N][N]) {
//	int i, j,  temp, num = 1, n = 0, m = 0;
//	int max, min, minn_index, minm_index, maxn_index, maxm_index;
//	max = min = arr[0][0];
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			if (max < *(*(arr + i) + j)) {
//				max = *(*(arr + i) + j);
//				maxn_index = i;
//				maxm_index = j;
//			}
//	temp = *(*(arr + maxn_index) + maxm_index);
//	*(*(arr + maxn_index) + maxm_index) = *(*(arr + 2) + 2);
//	*(*(arr + 2) + 2) = temp;
//	while (num < N) {
//		if (num > 1) {
//			min = arr[0][1];
//			minn_index = 0;
//			minm_index = 1;
//		}
//		for (i = 0; i < N; i++)
//			for (j = 0; j < N; j++) {
//				if (num == 1 ) {
//					if (min > *(*(arr + i) + j)) {
//						min = *(*(arr + i) + j);
//						minn_index = i;
//						minm_index = j;
//					}
//					continue;
//				}
//				if (num > 1 && i == 0 && j == 0)
//					continue;
//				if (num > 2 && i == 0 && j == 4)
//					break;
//				if (num > 3 && i == 4 && j == 0)
//					continue;
//				if (min > *(*(arr + i) + j)) {
//					min = *(*(arr + i) + j);
//					minn_index = i;
//					minm_index = j;
//				}
//			}
//		switch (num) {
//		case 1: temp = *(*(arr + minn_index) + minm_index);
//			*(*(arr + minn_index) + minm_index) = **arr;
//			**arr = temp; break;
//		case 2: temp = *(*(arr + minn_index) + minm_index);
//			*(*(arr + minn_index) + minm_index) = *(*(arr)+N - 1);
//			*(*(arr)+N - 1) = temp; break;
//		case 3: temp = *(*(arr + minn_index) + minm_index);
//			*(*(arr + minn_index) + minm_index) = *(*(arr + N - 1));
//			*(*(arr + N - 1)) = temp; break;
//		case 4: temp = *(*(arr + minn_index) + minm_index);
//			*(*(arr + minn_index) + minm_index) = *(*(arr + N - 1) + N - 1);
//			*(*(arr + N - 1) + N - 1) = temp; break;
//		}
//		num++;
//	}
//}
//int main() {
//	int a[N][N] = { 1,2,3,4,5,6,7,0,4,9,3,8,9,6,7,4,9,3,6,5,1,4,3,10,2 };
//	/*for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			scanf("%d", *(a + i) + j);*/
//	
//	fun(a);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++)
//			printf("%3d", *(*(a + i) + j));
//		printf("\n");
//	}
//}

// ָ����������

//void fun(char* ch[], int n) {
//	//char temp[20] = { 0 };
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if ((strcmp(*(ch + i), *(ch + j))) > 0) {
//				char* temp = *(ch + i);
//				*(ch + i) = *(ch + j);
//				*(ch + j) = temp;
//			}
//		}
//	}
//}
//int main() {
//	char arr[20][20] = { 0 };
//	char* p[20] = { 0 };
//	int n = 0;
//	for (int i = 0; i < 20; i++)
//		p[i] = arr[i];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%s", p[i]);
//	fun(p, n);
//	for (int i = 0; i < n; i++)
//		printf("%s\n", *(p+i));
//}

// ��ԭʼ����������ַ��������

//void fun(int* p, int n) {
//	int temp;
//	for (int i = 0; i < n/2; i++) {
//		temp = *(p + i);
//		*(p + i) = *(p + n - 1 - i);
//		*(p + n - 1 - i) = temp;
//	}
//}
//int main() {
//	int num[20] = { 0 };
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &num[i]);
//	fun(num, n);
//	for (int i = 0; i < n; i++)
//		printf("%3d", num[i]);
//}

// һ���ַ������������ַ���������ʽ�浽��һ������

//int main() {
//	char arr[30] = "A123x456 17960? 302tab5876";
//	int a[30] = { 0 };
//	int  i = 0;
//	char* p = arr;
//	while (*p != '\0') {
//		if (*p >= '0' && *p <= '9') {
//			while (*p >= '0' && *p <= '9') {
//				a[i] = a[i] * 10 + (*p - '0');
//				p++;
//			}
//			i++;
//		}
//		p++;
//	}
//	printf("һ����%d������", i);
//	for (int j = 0; j < i; j++)
//		printf("%d ", a[j]);
//}

// ָ��ʵ��strcmp

//int my_strcmp(char* str1, char* str2) {
//	int ret = 0, i = 0;
//	while (*(str1+i) != '\0' && *(str2+i) != '\0') {
//		ret = *(str1 + i) - *(str2 + i);
//		if (0 != ret)
//			break;
//		i++;
//	}
//	return ret;
//}
//int main() {
//	char a[20] = { 0 }, b[20] = { 0 };
//	int i = 0, ret = 0;
//	printf("�����һ���ַ�����");
//	gets(a);
//	printf("����ڶ����ַ�����");
//	gets(b);
//	ret = my_strcmp(a, b);
//	printf("result: %d", ret);
//}

// ݔ�딵���·�ݔ��Ӣ���·�

//int main() {
//	char month[12][20] = { "January","February","March","April","May", "June",
//						"July","August","September","October","November","December" };
//	char* p[12] = { 0 };
//	int monthNum = 0;
//	for (int i = 0; i < 12; i++)
//		p[i] = month + i;
//	printf("�������·ݣ�");
//	scanf("%d", &monthNum);
//	while (monthNum < 1 && monthNum > 12) {
//		printf("�������");
//		scanf("%d", &monthNum);
//	}
//	if (monthNum >= 1 && monthNum <= 12)
//		printf("%s", *(p + monthNum - 1));
//}

// ����ָ����ַ�������

//#define N 5
//void fun(char** p) {
//	/*char temp[20] = { 0 };*/
//	char* temp = NULL;
//	for (int i = 0; i < N; i++ ) {
//		for (int j = i + 1; j < N; j++) {
//			if (strcmp(*(p + i), *(p + j)) > 0) {
//				temp = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = temp;
//				/*strcpy(temp, p + i);
//				strcpy(p + i, p + j);
//				strcpy(p + j, temp);*/
//			}
//		}
//	}
//}
//int main() {
//	char* p[N] = { "xianzai", "bijiao","daxiao", "nishi", "aseh" };
//	fun(p);
//	for (int i = 0; i < N; i++)
//		printf("%s\n", *(p + i));
//}

//#define N 5
//void fun(char* p[N]) {
//	/*char temp[20] = { 0 };*/
//	char* temp = NULL;
//	for (int i = 0; i < N; i++ ) {
//		for (int j = i + 1; j < N; j++) {
//			if (strcmp(*(p + i), *(p + j)) > 0) {
//				temp = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = temp;
//				/*strcpy(temp, p + i);
//				*(p + i) =  *(p + j);
//				strcpy(p + j, *temp);*/
//			}
//		}
//	}
//}
//int main() {
//	char* p[N] = { "xianzai", "bijiao","daxiao", "nishi", "aseh" };
//	fun(p);
//	for (int i = 0; i < N; i++)
//		printf("%s\n", *(p + i));
//}

// ˳���

//#define Maxsize 10
//typedef int DateType;
//typedef struct {
//	DateType list[Maxsize];
//	int size;
//} Seqlist;
//
//void initList(Seqlist* List) {
//	List->size = 0;
//}
//int listInsert(Seqlist* List, int i, int x) {
//	if (List->size >= Maxsize) {
//		printf("˳���������");
//		return 0;
//	}
//	if (i < 0 || i > List->size) {
//		printf("����λ�ô���");
//		return 0;
//	}
//	for (int j = List->size; j > i; j--) {
//		List->list[j] = List->list[j - 1];
//	}
//	List->list[i] = x;
//	List->size++;
//}
//int listDelete(Seqlist* List, int i, int *x) {
//	if (List->size == 0) {
//		printf("û��Ԫ�ؿ�ɾ��");
//		return 0;
//	}
//	if (i < 0 || i >= List->size) {
//		printf("ɾ��λ�ô���");
//		return 0;
//	}
//	int j = 0;
//	*x = List->list[i];
//	for (j = i + 1; j < List->size; j++) {
//		List->list[j - 1] = List->list[j];
//	}
//	List->size--;
//}
//int listGet(Seqlist* List, int i, int* x) {
//	if (i < 0 || i > List->size - 1) {
//		printf("����λ�ô���");
//		return 0;
//	}
//	*x = List->list[i];
//}
//int main() {
//	Seqlist List;
//	int i, num;
//	initList(&List); // ��ʼ��
//	for(i = 0; i < Maxsize; i++) // ѭ������Ԫ��
//		listInsert(&List, i, i+1);
//	listDelete(&List, 6, &num); // ɾ��Ԫ�ز�����
//	printf("%d\n", num);
//	listGet(&List , 6, &num); // ����Ԫ�ز�����
//	for (i = 0; i < List.size; i++) // ����˳���
//		printf("%d", List.list[i]);
//	return 0;
//}

// ������

//typedef int DateType;
//typedef struct Node {
//	DateType data;
//	struct Node* next;
//} SLNode;
//
//SLNode* initList(SLNode* List) {
//	List = (SLNode*)malloc(sizeof(SLNode));
//	List->next = NULL;
//	return List;
//}
//int listInsert(SLNode* List, int i, int x) {
//	SLNode* p = List, *q;
//	int j = -1;
//	
//	while (p->next != NULL && j < i - 1) {
//		p = p->next;
//		j++;
//	}
//	if (j != i - 1) {
//		printf("����Ԫ��λ������");
//		return 0;
//	}
//	q = (SLNode*)malloc(sizeof(SLNode));
//	q->data = x;
//	q->next = p->next;
//	p->next = q;
//}
//int listDelete(SLNode* List, int i, int* x) {
//	SLNode* p = List, *q;
//	int j = -1;
//
//	while (p->next != NULL && p->next->next != NULL && j < i - 1) {
//		p = p->next;
//		j++;
//	}
//	if (j != i - 1) {
//		printf("ɾ��Ԫ��λ������");
//		return 0;
//	}
//	q = p->next;
//	*x = p->next->data;
//	p->next = p->next->next;
//	free(q);
//}
//int listGet(SLNode* List, int i, int* x) {
//	SLNode* p = List;
//	int j = -1;
//
//	while (p->next != NULL && j < i - 1) {
//		p = p->next;
//		j++;
//	}
//	if (j != i - 1) {
//		printf("����Ԫ��λ������");
//		return 0;
//	}
//	*x = p->data;
//}
//int Destory(SLNode* List) {
//	SLNode* p;
//	if (List == NULL)
//		return 0;
//	while (List)
//	{
//		p = List->next;
//		free(List);
//		List = p;
//	}
//}
//void print(SLNode* List) {
//	SLNode* p = List->next;
//	while (p != NULL) {
//		printf("%d", p->data);
//		p = p->next;
//	}
//}
//int main() {
//	SLNode* linkList = NULL;
//	int num;
//	linkList = initList(linkList);
//	for (int i = 0; i < 10; i++)
//		listInsert(linkList, i, i + 1);
//	listDelete(linkList, 6, &num);
//	listGet(linkList, 6, &num);
//	Destory(linkList);
//	print(linkList);
//}

// ˫������

//typedef int DataType;
//typedef struct Node {
//	DataType data;
//	struct Node* next;
//	struct Node* prior;
//} DLNode;
//void initlist(DLNode** list) {
//	*list = (DLNode*)malloc(sizeof(DLNode));
//	(*list)->next = *list;
//	(*list)->prior = *list;
//}
//int insertList(DLNode* list, int i, DataType x) {
//	DLNode* p = list->next, * s;
//	int j = 0;
//	while (p != list && j < i) {
//		p = p->next;
//		j++;
//	}
//	if (j != i) {
//		printf("����Ԫ��λ������");
//		return 0;
//	}
//	s = (DLNode*)malloc(sizeof(DLNode));
//	s->data = x;
//	s->prior = p->prior;
//	p->prior->next = s;
//	s->next = p;
//	p->prior = s;
//}
//int ListDelete(DLNode* list, int i, DataType* x) {
//	DLNode* p = list->next;
//	int j = 0;
//	while (p->next != list && j < i) {
//		p = p->next;
//		j++;
//	}
//	if (j != i) {
//		printf("ɾ��Ԫ��λ������");
//		return 0;
//	}
//	*x = p->data;
//	p->prior->next = p->next;
//	p->next->prior = p->prior;
//
//	free(p);
//}
//int ListLength(DLNode* list) {
//	DLNode* p = list;
//	int size = 0;
//	while (p->next != list) {
//		p = p->next;
//		size++;
//	}
//	return size;
//}
//void Destory(DLNode** list, int size) {
//	DLNode* p = *list, * p1;
//	int i;
//	for (i = 0; i <= size; i++) {
//		p1 = p;
//		p = p->next;
//		free(p1);
//	}
//	*list = NULL;
//}
//void print(DLNode* List) {
//	DLNode* p = List->next;
//	while (p != List) {
//		printf("%d ", p->data);
//		p = p->next;
//	}
//}
//int main() {
//	DLNode* List = NULL;
//	initlist(&List);
//	for(int i = 0; i < 10; i++)
//		insertList(List, i, i+1);
//	int num = 0;
//	ListDelete(List, 6, &num);
//	int size = ListLength(List);
//	print(List);
//	Destory(&List, size);
//}

// ˳���ջ��ʵ��

//#define MaxSize 10
//typedef int ElemType;
//typedef struct stack{
//	ElemType data[MaxSize];
//	int top;
//} SqStack;
//void InitStack(SqStack* S) {
//	S->top = -1;
//}
//int Push(SqStack* S, ElemType x) {
//	if (S->top == MaxSize - 1)
//		return 0;
//	S->top = S->top + 1;
//	S->data[S->top] = x;
//}
//int Pop(SqStack* S, ElemType* x) {
//	if (S->top == -1)
//		return 0;
//	*x = S->data[S->top];
//	S->top = S->top - 1;
//}
//void print(SqStack S) {
//	while (S.top != -1)
//		printf("%d ",S.data[S.top--]);
//}
//int main() {
//	SqStack s;
//	int num;
//	InitStack(&s);
//	for (int i = 0; i < 5; i++)
//		Push(&s, i + 1);
//	Pop(&s, &num);
//	printf("%d\n", num);
//	print(s);
//}

// ��ʽ��ջ��ʵ��

//typedef int ElemType;
//typedef struct stack {
//	ElemType data;
//	struct stack* next;
//} LSNode;
//void InitStack(LSNode** S) {
//	*S = (LSNode*)malloc(sizeof(LSNode));
//	(*S)->next = NULL;
//}
//int Push(LSNode* S, ElemType x) {
//	LSNode* p;
//	p = (LSNode*)malloc(sizeof(LSNode));
//	p->data = x;
//	p->next = S->next;
//	S->next = p;
//}
//int Pop(LSNode* S, ElemType* x) {
//	LSNode* p = S->next;
//	if (S->next == NULL)
//		return 0;
//	*x = p->data;
//	S->next = p->next;
//	free(p);
//}
//void print(LSNode* S) {
//	LSNode* p = S->next;
//	while (p != NULL) {
//		printf("%d ", p->data);
//		p = p->next;
//	}
//}
//int main() {
//	LSNode* s;
//	InitStack(&s);
//	for (int i = 0; i < 5; i++)
//		Push(s, i+1);
//	int num;
//	Pop(s, &num);
//	printf("%d\n", num);
//	print(s);
//}

// ˳�����

//#define MaxSize 10
//typedef int ElemType;
//typedef struct {
//	ElemType data[MaxSize];
//	int front, rear;
//} SqQuene;
//void InitQuene(SqQuene* S) {
//	S->front = 0;
//	S->rear = 0;
//}
//int EnQuene(SqQuene* S, ElemType x) {
//	if ((S->rear + 1) % MaxSize == S->front)
//		return 0;
//	S->data[S->front] = x;
//	S->rear = (S->rear + 1) % MaxSize;
//}
//int DeQuene(SqQuene* S, ElemType* x) {
//	if (S->rear == S->front)
//		return 0;
//	*x = S->data[S->front];
//	S->front = (S->front + 1) % MaxSize;
//}
//int GetQuene(SqQuene S, ElemType* x) {
//	if (S.rear == S.front)
//		return 0;
//	*x = S.data[S.front];
//}
//int main() {
//	SqQuene s;
//	int num;
//	InitQuene(&s);
//	for (int i = 0; i < 5; i++)
//		EnQuene(&s, i + 1);
//	DeQuene(&s, &num);
//	printf("%d\n", num);
//}

// ��ʽ����

//typedef int ElemType;
//typedef struct qnode {
//	ElemType data;
//	struct qnode* next;
//} LQNode;
//typedef struct {
//	LQuene* rear, * front;
//} LQuene;
//void InitQuene(LQuene* S) {
//	S->rear = NULL;
//	S->front = NULL;
//}
//void EnQuene(LQuene* S, ElemType x) {
//	LQNode* p = (LQNode*)malloc(sizeof(LQNode));
//	p->data = x;
//	p->next = NULL;
//	if (S->front == NULL) {
//		S->front = p;
//		S->rear = p;
//	}
//	else {
//		S->rear->next = p;
//		S->rear = p;
//	}
//}
//int DeQuene(LQuene* S, ElemType* x) {
//	if (S->front == NULL)
//		return 0;
//	LQNode* p = S->front;
//	*x = p->data;
//	S->front = p->next;
//	if (S->rear == p) {
//		S->rear = NULL;
//		S->front = NULL;
//	}
//	free(p);
//}
//int main() {
//	LQuene* s;
//	InitQuene(&s);
//}

// ���ļ��

//int main() {
//	char ch[30] = { 0 };
//	int flag = 0, i;
//	gets(ch);
//	int size = strlen(ch);
//	int n = size - 1;
//	if (size % 2 == 0) { // �ַ���Ϊż��
//		for (i = 0; i < n / 2; i++) {
//			if (ch[i] != ch[n - i]) {
//				flag = 1;
//			}
//		}
//	}
//	else {
//		for (i = 0; i < (n - 1) / 2; i++) {
//			if (ch[i] != ch[n - i]) {
//				flag = 1;
//			}
//		}
//	}
//	if (flag)
//		printf("is not a palindrome!");
//	else
//		printf("is a palindrome!");
//}

// ���һ�����Ƿ�����������֮��

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

// ʮ����ת������

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

// �˽���ת������

//int main() {
//	int n[20] = { 0 };
//	printf("input a 8 system\n");
//	int a, i = 0, m;
//	scanf("%d", &a);
//	while (a) {
//		if (a % 10 > 7) {
//			printf("�������,�������룡");
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

//int main()
//{
//	int i, j;
//	int a[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;
//		for (j = 1; j < i; j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
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


//#include <stdio.h>
//int binary_search(int* list, int len, int target) {
//    int low = 0;
//    int hight = len - 1;
//    int middle;
//    while (low <= hight) {
//        middle = (low + hight) / 2;
//        if (list[middle] = target) {
//            printf("���ҵ���ֵ�������±�Ϊ:%d\n", middle);
//            return list[middle];
//        }
//        else if (list[middle] > target) {
//            hight = middle - 1;
//        }
//        else if (list[middle] < target) {
//            low = middle + 1;
//        }
//    }
//    printf("�Ҳ���");
//    return -1;
//}
//
//int main() {
//
//    int a[] = { 2,4,5,8,9,44 };
//    int b = binary_search(a, sizeof(a) / 4, 5);
//    printf("b=%d\n", b);
//    return 0;
//}

#include<stdio.h>
#include<string.h>
void dao_xv(char* aa, int a)
{
	char b;

	if (aa < aa+a)
	{
		b = *aa;
		*aa = *(aa + a);
		*(aa + a) = b;
		dao_xv(aa + 1, a - 2);
	}
}
int main()
{
	char aa[] = "abcdefg";
	int a = strlen(aa) - 1;
	dao_xv(aa, a);
	//printf("%c", *aa);
	printf("%s ", aa);
}