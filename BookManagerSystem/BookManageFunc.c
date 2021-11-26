#include "BookManage.h"

void show_main() //������
{
	printf("******* ͼ�����ϵͳ�� *******\n");
	printf("������������������������������\n");
	printf("         1��ѧ����            \n");
	printf("         2������Ա��          \n");
	printf("         0���˳�              \n");
	printf("������������������������������\n");
}
void show_stu() //ѧ����
{
	printf("*********   ѧ����   *********\n");
	printf("������������������������������\n");
	printf("           1����½            \n");
	printf("           2��ע��            \n");
	printf("           0������            \n");
	printf("������������������������������\n");
}
void show_stu_enter() //ѧ��ҳ
{
	printf("*********   ѧ��ҳ   *********\n");
	printf("������������������������������\n");
	printf("           1������            \n");
	printf("           2������            \n");
	printf("           3������            \n");
	printf("           4������������    \n");
	printf("           5���޸�����        \n");
	printf("           0������            \n");
	printf("������������������������������\n");
}
void show_manager() //����Ա��
{
	printf("*********  ����Ա��  *********\n");
	printf("������������������������������\n");
	printf("	   1����¼            \n");
	printf("           0������            \n");
	printf("������������������������������\n");
}
void show_manager_enter() //����Աҳ
{
	printf("*********  ����Աҳ  *********\n");
	printf("������������������������������\n");
	printf("	 1���ϼ��鼮        \n");
	printf("	 2���¼��鼮        \n");
	printf("	 3������鼮        \n");
	printf("	 4������ѧ���˺�    \n");
	printf("	 5���޸�����        \n");
	printf("           0���˳�            \n");
	printf("������������������������������\n");
}
void manager_stu() // ����ѧ��ҳ
{
	printf("********  ����ѧ��ҳ  ********\n");
	printf("������������������������������\n");
	printf("	 1��ɾ��ѧ����Ϣ        \n");
	printf("	 2���޸�ѧ������        \n");
	printf("	 3���鿴ѧ������        \n");
	printf("           0���˳�            \n");
	printf("������������������������������\n");
}
Book* Book_load() //���鼮�ļ��е���Ϣ�������鼮����
{
	FILE* fp = fopen("BookList.txt", "r");
	if (!fp)
	{
		perror("fopen");
		exit(0);
	}
	Book* exchange = (Book*)malloc(sizeof(Book));
	Book* ret = exchange;
	char book_num[10]; //���
	char book_name[20]; //����
	char book_at_name[30]; //������
	char book_cp_name[30]; //������
	float book_price; //�۸�
	int book_rest; //���
	while (fscanf(fp, "%s %s %s %s %f %d", 
		book_num,book_name, book_at_name, book_cp_name, &book_price, &book_rest) != EOF)
	{
		Book* tmp = (Book*)malloc(sizeof(Book));
		strcpy(tmp->book_num , book_num);
		strcpy(tmp->book_name, book_name);
		strcpy(tmp->book_at_name, book_at_name);
		strcpy(tmp->book_cp_name, book_cp_name);
		tmp->book_price = book_price;
		tmp->book_rest = book_rest;
		exchange->next = tmp;
		exchange = tmp;
	}
	exchange->next = NULL;
	fclose(fp);
	return ret->next;
}
Student* Student_load() //��ѧ���ļ��е���Ϣ������ѧ������
{
	FILE* fp = fopen("StudentList.txt", "r");
	if (!fp)
	{
		perror("fopen");
		exit(0);
	}
	Student* exchange = (Student*)malloc(sizeof(Student));
	
	Student* ret = exchange;
	char stu_acc[10]; //ѧ���˺ţ�ѧ�ţ�
	char stu_passw[15]; //ѧ������
	char stu_name[20]; //ѧ������
	char stu_tel[15]; //ѧ���绰
	int stu_bor_num; // ��������
	char stu_bor_book[10][20] = { 0 }; //�������
	while (fscanf(fp, "%s %s %s %s %d",
		stu_acc, stu_passw, stu_name, stu_tel, &stu_bor_num) != EOF)
	{
		Student* tmp = (Student*)malloc(sizeof(Student));
		int i = 0;
		char ch;
		while ((ch = getc(fp)) != '\n' && ch != EOF)
		{
			fscanf(fp, "%s", stu_bor_book[i++]);
		}
		strcpy(tmp->stu_acc, stu_acc);
		strcpy(tmp->stu_passw, stu_passw);
		strcpy(tmp->stu_name, stu_name);
		strcpy(tmp->stu_tel, stu_tel);
		tmp->stu_bor_num = stu_bor_num;
		i = 0;
		for (; i < stu_bor_num; i++)
		{
			strcpy(tmp->stu_bor_book[i], stu_bor_book[i]);
		}
		exchange->next = tmp;
		exchange = tmp;
	}
	exchange->next = NULL;
	fclose(fp);
	return ret->next;
}
Manager* Manager_load() //������Ա�ļ�����Ϣ����������Ա����
{
	FILE* fp = fopen("ManagerList.txt", "r");
	if (!fp)
	{
		perror("fopen");
		exit(0);
	}
	Manager* exchange = (Manager*)malloc(sizeof(Manager));
	Manager* ret = exchange;
	char man_name[15]; //����Ա����
	char man_acc[10]; //����Ա�˺�
	char man_passw[15]; //����Ա����
	while (fscanf(fp, "%s %s %s",
		man_name, man_acc, man_passw) != EOF)
	{
		Manager* tmp = (Manager*)malloc(sizeof(Manager));
		strcpy(tmp->man_name, man_name);
		strcpy(tmp->man_acc, man_acc);
		strcpy(tmp->man_passw, man_passw);

		exchange->next = tmp;
		exchange = tmp;
	}
	exchange->next = NULL;
	fclose(fp);
	return ret->next;
}

void Student_Port(Student* stu, Book* book) //ѧ���˿�
{
	char input = '1';
	while (input != '0')
	{
		show_stu();
		printf("\t\t\t��");
		scanf("%c", &input);
		while (getchar() != '\n');

		switch (input)
		{
			case'1':Student_page(stu, book); break; //ѧ����

			case'2':Student_Register(stu); break; //ע��

			case'0':Save_Book(book); Save_Student(stu); break; //�˳����򣬱��������������ļ���

			default:printf("\t\t�����������������\n"); break;
		}
	}
}
void Student_page(Student* stu, Book* book) // ѧ��ҳ
{
	char* stuTmp = Student_Login(stu); // ���ص�ѧ��
	if (stuTmp == NULL)
	{
		printf("������ѡ��\n");
		return;
	}
	char stuNum[10]; // ѧ��ѧ��
	strcpy(stuNum, stuTmp);
	printf("\t��ӭ %s !\n", Find_StuNum(stuNum, stu)->stu_name);
	char input = '1';
	while (input != '0')
	{
		getchar();
		show_stu_enter();
		printf("\t\t\t��");
		scanf("%c", &input);
		while (getchar() != '\n');

		switch (input)
		{
		case'1': Stu_Borrow(stuNum, stu, book);  break; // ����
		case'2': Stu_Back(stuNum, stu, book); break;// ����
		case'3': Find_Book(stuNum, stu, book); break;// ����
		case'4': Find_Theborrow(stuNum, stu, book); break; // ����������
		case'5': Change_Stupassword(stuNum, stu); break; // �޸�����
		case'0': Save_Book(book); Save_Student(stu); break; //�˳����򣬱��������������ļ���
		default: printf("\t\t�����������������\n"); break;
		}
	}
}
char* Student_Login(Student* stu) //ѧ���˵�¼
{
	Student* stuTmp = stu->next;
	char stu_acc[10]; //ѧ���˺�
	char stu_passw[15]; //ѧ������
	int num = 3;
	while (num > 0)
	{
		printf("������ѧ���˺ţ�ѧ�ţ���>");
		scanf("%s", stu_acc);
		printf("������ѧ�����룺>");
		Password_Input(stu_passw);
		while (stuTmp != NULL && strcmp(stuTmp->stu_acc, stu_acc) != 0)
		{
			stuTmp = stuTmp->next;
		}
		if (stuTmp != NULL && strcmp(stuTmp->stu_acc, stu_acc) == 0)
		{
			if (strcmp(stuTmp->stu_passw, stu_passw) == 0)
			{
				return stu_acc;
				return;
			}
			else
			{
				printf("��������㻹��%d�λ��ᣡ\n", num - 1);
			}
		}
		else
		{
			char i = '2';
			printf("�˺Ų����ڣ�������ѧ���˺�����1\n�˳�����0\n");
			scanf("%c", i);
			switch (i)
			{
			case '1': break;
			case '0': num = 0; break;
			default: printf("�������"); break;
			}
		}
		num--;
	}
	return NULL;
}
void Student_Register(Student* stu) //ѧ��ע���˺�
{
	while (stu->next != NULL)
	{
		stu = stu->next;
	}
	Student* exchange = (Student*)malloc(sizeof(Student));
	char stu_acc[10]; //ѧ���˺ţ�ѧ�ţ�
	char stu_passw[15]; //ѧ������
	char stu_name[20]; //ѧ������
	char stu_tel[15]; //ѧ���绰
	printf("������10λѧ�ţ�");
	scanf("%s", stu_acc);
	printf("\n");
	printf("���������룺");
	scanf("%s", stu_passw);
	printf("\n");
	printf("������������");
	scanf("%s", stu_name);
	printf("������绰��");
	scanf("%s", stu_tel);

	strcpy(exchange->stu_acc, stu_acc);
	strcpy(exchange->stu_passw, stu_passw);
	strcpy(exchange->stu_name, stu_name);
	strcpy(exchange->stu_tel, stu_tel);
	exchange->stu_bor_num = 0;
	int i = 0;
	for (; i < 10; i++)
	{
		strcpy(exchange->stu_bor_book[i], " ");
	}
	printf("ע��ɹ���\n");
	exchange->next = stu->next;
	stu->next = exchange;
}

void Password_Input(char* Password) //�������뺯��
{
	unsigned char c;
	int i = 0;
	while ((c = getch()) != '\r') {
		if (i < 15 && isprint(c)) {
			Password[i] = c;
			i++;
			putchar('*');
		}
		else if (i > 0 && c == '\b') {
			i--;
			putchar('\b');
			putchar(' ');
			putchar('\b');
		}
	}
	printf("\n");
	Password[i] = '\0';
}

Student* Find_StuNum(char* stuNum, Student* stu) //��ѧ�Ų���ѧ��
{
	Student* stuTmp = stu->next;
	while (stuTmp != NULL && strcmp(stuTmp->stu_acc, stuNum) != 0)
	{
		stuTmp = stuTmp->next;
	}
	if (stuTmp != NULL && strcmp(stuTmp->stu_acc, stuNum) == 0)
	{
		return stuTmp;
	}
	else
	{
		return NULL;
	}
}

void Stu_Borrow(char* stuNum, Student* stu, Book* book) //ѧ������
{
	Student* stuTmp = stu->next;
	while (stuTmp != NULL && strcmp(stuTmp->stu_acc, stuNum) != 0)
	{
		stuTmp = stuTmp->next;
	}
	if (stuTmp == NULL)
	{
		return;
	}
	if (stuTmp->stu_bor_num == 10)
	{
		printf("�Բ�����������Ϊ10�����㵱ǰ�����Ϊ10��\n");
		return;
	}

	Book* bookTmp = book->next;
	char book_num[10]; //���
	Print_Book(book);
	int num = 1;
	while (num)
	{
		printf("��������Ҫ�������ţ�>");
		scanf("%s", book_num);
		while (bookTmp != NULL && strcmp(bookTmp->book_num, book_num) != 0)
		{
			bookTmp = bookTmp->next;
		}
		if (bookTmp != NULL && bookTmp->book_rest == 0)
		{
			printf("��Ǹ�������ѱ����꣡\n");
			return;
		}
		if (bookTmp != NULL && strcmp(bookTmp->book_num, book_num) == 0)
		{
			// ��ǰѧ���������ͼ��
			int i = stuTmp->stu_bor_num;
			strcpy(stuTmp->stu_bor_book[i], book_num);
			stuTmp->stu_bor_num++;

			// ͼ���������1
			bookTmp->book_rest--;
		}
		else
		{
			printf("���������Ų����ڣ����˳���\n");
		}
		num = 0;
	}
}

void Stu_Back(char* stuNum, Student* stu, Book* book) //ѧ������
{
	Student* stuTmp = stu->next;
	while (stuTmp != NULL && strcmp(stuTmp->stu_acc, stuNum) != 0)
	{
		stuTmp = stuTmp->next;
	}
	if (stuTmp == NULL)
	{
		return;
	}
	Find_Theborrow(stuNum, stu, book);
	char book_num[10]; //���
	Book* bookTmp = book->next;
	printf("��������Ҫ�黹�����ţ�>");
	scanf("%s", book_num);
	int i = 0;
	for (; i < stuTmp->stu_bor_num; i++)
	{
		if (strcmp(stuTmp->stu_bor_book[i], book_num) == 0)
		{
			int j = i + 1;
			for (; j < stuTmp->stu_bor_num; j++)
			{
				strcpy(stuTmp->stu_bor_book[j - 1], stuTmp->stu_bor_book[j]);
			}
			stuTmp->stu_bor_num--;

			// ͼ���������һ
			while (bookTmp != NULL && strcmp(bookTmp->book_num, book_num) != 0)
			{
				bookTmp = bookTmp->next;
			}
			if (bookTmp != NULL && strcmp(bookTmp->book_num, book_num) == 0)
			{
				bookTmp->book_rest++;
			}
		}
		else
		{
			printf("��Ŵ������˳���\n");
			break;
		}
	}
}

void Find_Book(char* stuNum, Student* stu, Book* book) //������
{
	Student* stuTmp = stu->next;
	while (stuTmp != NULL && strcmp(stuTmp->stu_acc, stuNum) != 0)
	{
		stuTmp = stuTmp->next;
	}
	if (stuTmp == NULL)
	{
		return;
	}
	char book_name[20]; //����
	printf("��������Ҫ�����������>");
	scanf("%s", book_name);
	Book* bookTmp = book->next;
	while (bookTmp != NULL && strcmp(bookTmp->book_name, book_name) != 0)
	{
		bookTmp = bookTmp->next;
	}
	if (bookTmp != NULL && strcmp(bookTmp->book_name, book_name) == 0)
	{
		printf("���\t  ����\t\t\t������\t   ������\t\t�۸�\t���\n");
		printf("%s  %-20s  %-10s %-20s   %0.2f    %d\n",
			bookTmp->book_num, bookTmp->book_name, bookTmp->book_at_name,
			bookTmp->book_cp_name, bookTmp->book_price, bookTmp->book_rest);
	}
	else
	{
		printf("��Ǹ��û���ҵ���ͼ�飡\n");
	}
}
void Find_Theborrow(char* stuNum, Student* stu, Book* book) //ѧ���鿴������
{
	Student* stuTmp = stu->next;
	while (stuTmp != NULL && strcmp(stuTmp->stu_acc, stuNum) != 0)
	{
		stuTmp = stuTmp->next;
	}
	if (stuTmp == NULL)
	{
		return;
	}
	printf("�㵱ǰ���ĵ�ͼ���У�\n");
	printf("���\t  ����\t\t\t������\t   ������\t\t�۸�\n");
	if (stuTmp->stu_bor_num == 0)
	{
		printf("�㵱ǰû�н��飡");
		return;
	}
	int i = 0;
	for (; i < stuTmp->stu_bor_num; i++)
	{
		Book* bookTmp = book->next;
		while (bookTmp != NULL && strcmp(stuTmp->stu_bor_book[i], bookTmp->book_num) != 0)
		{
			bookTmp = bookTmp->next;
		}
		if (bookTmp != NULL && strcmp(stuTmp->stu_bor_book[i], bookTmp->book_num) == 0)
		{
			printf("%s  %-20s  %-10s %-20s %0.2f\n",
				bookTmp->book_num, bookTmp->book_name, bookTmp->book_at_name,
				bookTmp->book_cp_name, bookTmp->book_price);
		}
	}
}
void Change_Stupassword(char* stuNum, Student* stu) //�޸�����
{
	Student* stuTmp = stu->next;
	while (stuTmp != NULL && strcmp(stuTmp->stu_acc, stuNum) != 0)
	{
		stuTmp = stuTmp->next;
	}
	if (stuTmp == NULL)
	{
		return;
	}
	char stu_passw[15]; //ѧ������
	printf("������Ҫ�޸ĵ����룺>");
	scanf("%s", stu_passw);
	strcpy(stuTmp->stu_passw, stu_passw);
}

void Manager_Port(Manager* man, Student* stu, Book* book) //����Ա�˿�
{
	char input = '1';
	while (input != '0')
	{
		show_manager();
		printf("\t\t\t��");
		scanf("%c", &input);
		while (getchar() != '\n');

		switch (input)
		{
		case'1':Manager_page(man, stu, book); break; //����Ա��

		//case'0':Save_Book(book); Save_Manager(man);  break; //�˳����򣬱��������������ļ���
		case '0': break;
		default:printf("\t\t�����������������\n"); break;
		}
	}
}
Manager* Find_ManNum(char* manNum, Manager* man)
{
	Manager* manTmp = man->next;
	while (manTmp != NULL && strcmp(manTmp->man_acc, manNum) != 0)
	{
		manTmp = manTmp->next;
	}
	if (manTmp != NULL && strcmp(manTmp->man_acc, manNum) == 0)
	{
		return manTmp;
	}
	else
	{
		return NULL;
	}
}
void Manager_page(Manager* man, Student* stu, Book* book) // ����Աҳ
{
	char* manTmp = Manager_Login(man); // ���ص��˺�
	if (manTmp == NULL)
	{
		printf("������ѡ��\n");
		return;
	}
	char manNum[10]; // ѧ��ѧ��
	strcpy(manNum, manTmp);
	printf("\t��ӭ %s !\n", Find_ManNum(manNum, man)->man_name);
	char input = '1';
	while (input != '0')
	{
		getchar();
		show_manager_enter();
		printf("\t\t\t��");
		scanf("%c", &input);
		while (getchar() != '\n');

		switch (input)
		{
		case'1': Manager_Add_Book(manNum, man, book);  break; // �ϼ��鼮
		case'2': Manager_Down_Book(manNum, man, book); break;// �¼��鼮
		case'3': Print_Book(book); break;// ����鼮
		case'4': Manager_Manager_Stu(stu, man, book); break; // ����ѧ���˺�
		case'5': Manager_Change_Password(manNum, man); break; // �޸�����
		case'0': Save_Student(stu); Save_Book(book); Save_Manager(man); break; //�˳����򣬱��������������ļ���
		default: printf("\t\t�����������������\n"); break;
		}
	}
}

void Print_Book(Book* book) //��ӡ�鵥
{
	Book* tmp = book->next;
	printf("���\t  ����\t\t\t ������\t   ������\t\t�۸�\t���\n");
	while (tmp != NULL)
	{
		printf("%s  %-20s  %-10s %-15s     %0.2f   %d\n",
				tmp->book_num,tmp->book_name,tmp->book_at_name,
				tmp->book_cp_name,tmp->book_price, tmp->book_rest);
		tmp = tmp->next;
	}
}

char* Manager_Login(Manager* man) //����Ա��¼
{
	Manager* manTmp = man->next;
	char man_acc[10]; //����Ա�˺�
	char man_passw[15]; //����Ա����
	int num = 3;
	while (num > 0)
	{
		printf("���������Ա�˺ţ�ѧ�ţ���>");
		scanf("%s", man_acc);
		printf("���������Ա���룺>");
		Password_Input(man_passw);
		while (manTmp != NULL && strcmp(manTmp->man_acc, man_acc) != 0)
		{
			manTmp = manTmp->next;
		}
		if (manTmp != NULL && strcmp(manTmp->man_acc, man_acc) == 0)
		{
			if (strcmp(manTmp->man_passw, man_passw) == 0)
			{
				return man_acc;
				return;
			}
			else
			{
				printf("��������㻹��%d�λ��ᣡ\n", num - 1);
			}
		}
		else
		{
			char i = '2';
			printf("�˺Ų����ڣ����������Ա�˺�����1\n�˳�����0\n");
			scanf("%d", i);
			switch (i)
			{
			case '1': break;
			case '0': num = 0; break;
			default: printf("�������"); break;
			}
		}
		num--;
	}
	return NULL;
}

void Manager_Add_Book(char* manNum, Manager* man, Book* book) //����Ա�ϼ��鼮
{
	Manager* manTmp = man->next;
	while (manTmp != NULL && strcmp(manTmp->man_acc, manNum) != 0)
	{
		manTmp = manTmp->next;
	}
	if (manTmp == NULL)
	{
		return;
	}
	char book_num[10]; //���
	char book_name[20]; //����
	char book_at_name[30]; //������
	char book_cp_name[30]; //������
	float book_price; //�۸�
	int book_rest; //���
	Book* bookTmp = book->next;
	printf("������Ҫ��ӵ���ţ�>");
	scanf("%s", book_num);
	while (bookTmp != NULL && strcmp(bookTmp->book_num, book_num) != 0)
	{
		bookTmp = bookTmp->next;
	}
	if (bookTmp != NULL && strcmp(bookTmp->book_num,book_num) == 0)
	{
		printf("��ǰ���ڸ�ͼ�飡����һ\n");
		bookTmp->book_rest++;
	}
	else
	{
		Book* cur = (Book*)malloc(sizeof(Book));
		printf("������Ҫ��ӵ�������>");
		scanf("%s", book_name);
		printf("������Ҫ��ӵ���������>");
		scanf("%s", book_at_name);
		printf("������Ҫ��ӵĳ����磡>");
		scanf("%s", book_cp_name);
		printf("������Ҫ��ӵļ۸�>");
		scanf("%f", &book_price);
		printf("������Ҫ��ӵĴ�⣡>");
		scanf("%d", &book_rest);
		
		strcpy(cur->book_num, book_num);
		strcpy(cur->book_name, book_name);
		strcpy(cur->book_at_name, book_at_name);
		strcpy(cur->book_cp_name, book_cp_name);
		cur->book_price = book_price;
		cur->book_rest = book_rest;

		cur->next = book->next;
		book->next = cur;
	}
}
void Manager_Down_Book(char* manNum, Manager* man, Book* book) //����Ա�¼��鼮
{
	Manager* manTmp = man->next;
	while (manTmp != NULL && strcmp(manTmp->man_acc, manNum) != 0)
	{
		manTmp = manTmp->next;
	}
	if (manTmp == NULL)
	{
		return;
	}
	Book* bookTmp = book->next;
	Print_Book(book);
	printf("\n");
	char book_num[10]; //���
	printf("������Ҫ�¼ܵ���ţ�>");
	scanf("%s", book_num);
	while (bookTmp != NULL && strcmp(bookTmp->book_num, book_num) != 0)
	{
		bookTmp = bookTmp->next;
	}
	if (bookTmp != NULL && strcmp(bookTmp->book_num, book_num) == 0)
	{
		if (bookTmp->book_rest == 0)
		{
			printf("������Ϊ0");
		}
		else
		{
			bookTmp->book_rest--;
		}
	}
	else
	{
		printf("ͼ�鲻���ڣ�");
	}
}

void Manager_Manager_Stu(Student* stu, Manager* man, Book* book) //����Ա����ѧ��
{
	char input = '1';
	while (input != '0')
	{
		manager_stu();
		printf("\t\t\t��");
		scanf("%c", &input);
		while (getchar() != '\n');

		switch (input)
		{
		case'1': Manager_Del_Stu(stu, book); break; // ɾ��ѧ�����벢�黹ͼ��
		case'2': Manager_Change_StuPassword(stu); break;// �޸�ѧ������
		case'3': Manager_Look_Stu(stu); break;// �鿴ѧ������
		case'0': break; //�˳����򣬱��������������ļ���
		default: printf("\t\t�����������������\n"); break;
		}
	}
}
void Manager_Change_Password(char* manNum, Manager* man) //����Ա�޸�����
{
	Manager* manTmp = man->next;
	while (manTmp != NULL && strcmp(manTmp->man_acc, manNum) != 0)
	{
		manTmp = manTmp->next;
	}
	if (manTmp == NULL)
	{
		return;
	}
	char man_passw[15]; //����Ա����
	printf("������Ҫ�޸ĵ����룺>");
	scanf("%s", man_passw);
	strcpy(manTmp->man_passw, man_passw);
}
void Manager_Change_StuPassword(Student* stu) // ����Ա�޸�ѧ������
{
	Manager_Look_Stu(stu);
	char stuNum[10];
	printf("������Ҫ�޸������ѧ����ѧ��;>");
	scanf("%s", stuNum);
	Student* stuTmp = stu->next;
	while (stuTmp != NULL && strcmp(stuTmp->stu_acc, stuNum) != 0)
	{
		stuTmp = stuTmp->next;
	}
	if (stuTmp == NULL)
	{
		return;
	}
	char stu_passw[15]; //ѧ������
	printf("������Ҫ�޸ĵ����룺>");
	scanf("%s", stu_passw);
	strcpy(stuTmp->stu_passw, stu_passw);
}
void Manager_Look_Stu(Student* stu) //����Ա�鿴ѧ������
{
	Student* stuTmp = stu->next;

	printf("ѧ��\t   ѧ������   ѧ������\t ѧ���绰\t��������  ���ͼ�����\n");
	while (stuTmp != NULL)
	{
		printf("%-10s %-10s %-10s %-15s  %d\t  ",
			stuTmp->stu_acc, stuTmp->stu_passw, stuTmp->stu_name,
			stuTmp->stu_tel, stuTmp->stu_bor_num);
		int i = 0;
		for (; i < stuTmp->stu_bor_num; i++)
		{
			printf("%-8s ", stuTmp->stu_bor_book[i]);
		}
		printf("\n");
		stuTmp = stuTmp->next;
	}
}

void Manager_Del_Stu(Student* stu, Book* book) // ɾ��ѧ�����벢�黹�����鼮
{
	Manager_Look_Stu(stu);
	char stuNum[10];
	printf("������Ҫɾ��ѧ���ĺ���;>");
	scanf("%s", stuNum);
	getchar();
	Student* stuTmp = stu;
	Book* bookTmp = book->next;
	while (stuTmp->next != NULL && strcmp(stuTmp->next->stu_acc, stuNum) != 0)
	{
		stuTmp = stuTmp->next;
	}
	if (stuTmp->next == NULL)
	{
		return;
	}
	int i = 0;
	for (; i < stuTmp->next->stu_bor_num; i++)
	{
		while (bookTmp != NULL && strcmp(stuTmp->next->stu_bor_book[i], bookTmp->book_num) != 0)
		{
			bookTmp = bookTmp->next;
		}
		if (bookTmp != NULL && strcmp(stuTmp->next->stu_bor_book[i], bookTmp->book_num) == 0)
		{
			bookTmp->book_rest++;
			strcpy(stuTmp->next->stu_bor_book[i], "");
		}
	}
	stuTmp->next->stu_bor_num = 0;
	stuTmp->next = stuTmp->next->next;
}
void Save_Book(Book* book) //�����鼮�������ļ�
{
	Book* tmp = book->next;
	FILE* fp = fopen("BookList.txt", "w");
	if (!fp)
	{
		perror("fopen");
		exit(0);
	}
	while (tmp != NULL)
	{
		fprintf(fp, "%s %s %s %s %0.2f %d\n",
			tmp->book_num, tmp->book_name, tmp->book_at_name,
			tmp->book_cp_name, tmp->book_price, tmp->book_rest);
		tmp = tmp->next;
	}
	fclose(fp);
}
void Save_Student(Student* Stu) //����ѧ���������ļ�
{
	Student* tmp = Stu->next;
	FILE* fp = fopen("StudentList.txt", "w");
	if (!fp)
	{
		perror("fopen");
		exit(0);
	}
	while (tmp != NULL)
	{
		fprintf(fp, "%s %s %s %s %d",
			tmp->stu_acc, tmp->stu_passw,tmp->stu_name,
			tmp->stu_tel, tmp->stu_bor_num);
		int i = 0;
		for (; i < tmp->stu_bor_num; i++)
		{
			fprintf(fp, " %s", tmp->stu_bor_book[i]);
		}
		fprintf(fp, "\n");
		tmp = tmp->next;
	}
	fclose(fp);
}
void Save_Manager(Manager* man) //�������Ա�������ļ�
{
	Manager* tmp = man->next;
	FILE* fp = fopen("ManagerList.txt", "w");
	if (!fp)
	{
		perror("fopen");
		exit(0);
	}
	while (tmp != NULL)
	{
		fprintf(fp, "%s %s %s\n",
			tmp->man_name, tmp->man_acc, tmp->man_passw);
		tmp = tmp->next;
	}
	fclose(fp);
}
