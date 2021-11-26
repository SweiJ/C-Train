#include "BookManage.h"

void show_main() //主界面
{
	printf("******* 图书管理系统！ *******\n");
	printf("———————————————\n");
	printf("         1、学生端            \n");
	printf("         2、管理员端          \n");
	printf("         0、退出              \n");
	printf("———————————————\n");
}
void show_stu() //学生端
{
	printf("*********   学生端   *********\n");
	printf("———————————————\n");
	printf("           1、登陆            \n");
	printf("           2、注册            \n");
	printf("           0、返回            \n");
	printf("———————————————\n");
}
void show_stu_enter() //学生页
{
	printf("*********   学生页   *********\n");
	printf("———————————————\n");
	printf("           1、借书            \n");
	printf("           2、还书            \n");
	printf("           3、查书            \n");
	printf("           4、浏览借阅情况    \n");
	printf("           5、修改密码        \n");
	printf("           0、返回            \n");
	printf("———————————————\n");
}
void show_manager() //管理员端
{
	printf("*********  管理员端  *********\n");
	printf("———————————————\n");
	printf("	   1、登录            \n");
	printf("           0、返回            \n");
	printf("———————————————\n");
}
void show_manager_enter() //管理员页
{
	printf("*********  管理员页  *********\n");
	printf("———————————————\n");
	printf("	 1、上架书籍        \n");
	printf("	 2、下架书籍        \n");
	printf("	 3、浏览书籍        \n");
	printf("	 4、管理学生账号    \n");
	printf("	 5、修改密码        \n");
	printf("           0、退出            \n");
	printf("———————————————\n");
}
void manager_stu() // 管理学生页
{
	printf("********  管理学生页  ********\n");
	printf("———————————————\n");
	printf("	 1、删除学生信息        \n");
	printf("	 2、修改学生密码        \n");
	printf("	 3、查看学生名单        \n");
	printf("           0、退出            \n");
	printf("———————————————\n");
}
Book* Book_load() //将书籍文件中的信息加载至书籍链表
{
	FILE* fp = fopen("BookList.txt", "r");
	if (!fp)
	{
		perror("fopen");
		exit(0);
	}
	Book* exchange = (Book*)malloc(sizeof(Book));
	Book* ret = exchange;
	char book_num[10]; //书号
	char book_name[20]; //书名
	char book_at_name[30]; //作者名
	char book_cp_name[30]; //出版社
	float book_price; //价格
	int book_rest; //库存
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
Student* Student_load() //将学生文件中的信息加载至学生链表
{
	FILE* fp = fopen("StudentList.txt", "r");
	if (!fp)
	{
		perror("fopen");
		exit(0);
	}
	Student* exchange = (Student*)malloc(sizeof(Student));
	
	Student* ret = exchange;
	char stu_acc[10]; //学生账号（学号）
	char stu_passw[15]; //学生密码
	char stu_name[20]; //学生姓名
	char stu_tel[15]; //学生电话
	int stu_bor_num; // 借书数量
	char stu_bor_book[10][20] = { 0 }; //所借书号
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
Manager* Manager_load() //将管理员文件的信息加载至管理员链表
{
	FILE* fp = fopen("ManagerList.txt", "r");
	if (!fp)
	{
		perror("fopen");
		exit(0);
	}
	Manager* exchange = (Manager*)malloc(sizeof(Manager));
	Manager* ret = exchange;
	char man_name[15]; //管理员姓名
	char man_acc[10]; //管理员账号
	char man_passw[15]; //管理员密码
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

void Student_Port(Student* stu, Book* book) //学生端口
{
	char input = '1';
	while (input != '0')
	{
		show_stu();
		printf("\t\t\t：");
		scanf("%c", &input);
		while (getchar() != '\n');

		switch (input)
		{
			case'1':Student_page(stu, book); break; //学生端

			case'2':Student_Register(stu); break; //注册

			case'0':Save_Book(book); Save_Student(stu); break; //退出程序，保存链表数据至文件中

			default:printf("\t\t输入错误，请重新输入\n"); break;
		}
	}
}
void Student_page(Student* stu, Book* book) // 学生页
{
	char* stuTmp = Student_Login(stu); // 返回的学号
	if (stuTmp == NULL)
	{
		printf("请重新选择！\n");
		return;
	}
	char stuNum[10]; // 学生学号
	strcpy(stuNum, stuTmp);
	printf("\t欢迎 %s !\n", Find_StuNum(stuNum, stu)->stu_name);
	char input = '1';
	while (input != '0')
	{
		getchar();
		show_stu_enter();
		printf("\t\t\t：");
		scanf("%c", &input);
		while (getchar() != '\n');

		switch (input)
		{
		case'1': Stu_Borrow(stuNum, stu, book);  break; // 借书
		case'2': Stu_Back(stuNum, stu, book); break;// 还书
		case'3': Find_Book(stuNum, stu, book); break;// 查书
		case'4': Find_Theborrow(stuNum, stu, book); break; // 浏览借阅情况
		case'5': Change_Stupassword(stuNum, stu); break; // 修改密码
		case'0': Save_Book(book); Save_Student(stu); break; //退出程序，保存链表数据至文件中
		default: printf("\t\t输入错误，请重新输入\n"); break;
		}
	}
}
char* Student_Login(Student* stu) //学生端登录
{
	Student* stuTmp = stu->next;
	char stu_acc[10]; //学生账号
	char stu_passw[15]; //学生密码
	int num = 3;
	while (num > 0)
	{
		printf("请输入学生账号（学号）：>");
		scanf("%s", stu_acc);
		printf("请输入学生密码：>");
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
				printf("密码错误！你还有%d次机会！\n", num - 1);
			}
		}
		else
		{
			char i = '2';
			printf("账号不存在！重新输学生账号输入1\n退出输入0\n");
			scanf("%c", i);
			switch (i)
			{
			case '1': break;
			case '0': num = 0; break;
			default: printf("输入错误！"); break;
			}
		}
		num--;
	}
	return NULL;
}
void Student_Register(Student* stu) //学生注册账号
{
	while (stu->next != NULL)
	{
		stu = stu->next;
	}
	Student* exchange = (Student*)malloc(sizeof(Student));
	char stu_acc[10]; //学生账号（学号）
	char stu_passw[15]; //学生密码
	char stu_name[20]; //学生姓名
	char stu_tel[15]; //学生电话
	printf("请输入10位学号：");
	scanf("%s", stu_acc);
	printf("\n");
	printf("请输入密码：");
	scanf("%s", stu_passw);
	printf("\n");
	printf("请输入姓名：");
	scanf("%s", stu_name);
	printf("请输入电话：");
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
	printf("注册成功！\n");
	exchange->next = stu->next;
	stu->next = exchange;
}

void Password_Input(char* Password) //输入密码函数
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

Student* Find_StuNum(char* stuNum, Student* stu) //按学号查找学生
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

void Stu_Borrow(char* stuNum, Student* stu, Book* book) //学生借书
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
		printf("对不起，最大借书数为10本，你当前借的书为10本\n");
		return;
	}

	Book* bookTmp = book->next;
	char book_num[10]; //书号
	Print_Book(book);
	int num = 1;
	while (num)
	{
		printf("请输入你要借书的书号：>");
		scanf("%s", book_num);
		while (bookTmp != NULL && strcmp(bookTmp->book_num, book_num) != 0)
		{
			bookTmp = bookTmp->next;
		}
		if (bookTmp != NULL && bookTmp->book_rest == 0)
		{
			printf("抱歉，此书已被借完！\n");
			return;
		}
		if (bookTmp != NULL && strcmp(bookTmp->book_num, book_num) == 0)
		{
			// 当前学生链表添加图书
			int i = stuTmp->stu_bor_num;
			strcpy(stuTmp->stu_bor_book[i], book_num);
			stuTmp->stu_bor_num++;

			// 图书链表存库减1
			bookTmp->book_rest--;
		}
		else
		{
			printf("你输入的书号不存在！已退出！\n");
		}
		num = 0;
	}
}

void Stu_Back(char* stuNum, Student* stu, Book* book) //学生还书
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
	char book_num[10]; //书号
	Book* bookTmp = book->next;
	printf("请输入你要归还书的书号：>");
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

			// 图书链表存库加一
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
			printf("书号错误，已退出！\n");
			break;
		}
	}
}

void Find_Book(char* stuNum, Student* stu, Book* book) //查找书
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
	char book_name[20]; //书名
	printf("请输入你要输入的书名：>");
	scanf("%s", book_name);
	Book* bookTmp = book->next;
	while (bookTmp != NULL && strcmp(bookTmp->book_name, book_name) != 0)
	{
		bookTmp = bookTmp->next;
	}
	if (bookTmp != NULL && strcmp(bookTmp->book_name, book_name) == 0)
	{
		printf("书号\t  书名\t\t\t作者名\t   出版社\t\t价格\t存库\n");
		printf("%s  %-20s  %-10s %-20s   %0.2f    %d\n",
			bookTmp->book_num, bookTmp->book_name, bookTmp->book_at_name,
			bookTmp->book_cp_name, bookTmp->book_price, bookTmp->book_rest);
	}
	else
	{
		printf("抱歉，没有找到该图书！\n");
	}
}
void Find_Theborrow(char* stuNum, Student* stu, Book* book) //学生查看所借书
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
	printf("你当前借阅的图书有：\n");
	printf("书号\t  书名\t\t\t作者名\t   出版社\t\t价格\n");
	if (stuTmp->stu_bor_num == 0)
	{
		printf("你当前没有借书！");
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
void Change_Stupassword(char* stuNum, Student* stu) //修改密码
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
	char stu_passw[15]; //学生密码
	printf("请输入要修改的密码：>");
	scanf("%s", stu_passw);
	strcpy(stuTmp->stu_passw, stu_passw);
}

void Manager_Port(Manager* man, Student* stu, Book* book) //管理员端口
{
	char input = '1';
	while (input != '0')
	{
		show_manager();
		printf("\t\t\t：");
		scanf("%c", &input);
		while (getchar() != '\n');

		switch (input)
		{
		case'1':Manager_page(man, stu, book); break; //管理员端

		//case'0':Save_Book(book); Save_Manager(man);  break; //退出程序，保存链表数据至文件中
		case '0': break;
		default:printf("\t\t输入错误，请重新输入\n"); break;
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
void Manager_page(Manager* man, Student* stu, Book* book) // 管理员页
{
	char* manTmp = Manager_Login(man); // 返回的账号
	if (manTmp == NULL)
	{
		printf("请重新选择！\n");
		return;
	}
	char manNum[10]; // 学生学号
	strcpy(manNum, manTmp);
	printf("\t欢迎 %s !\n", Find_ManNum(manNum, man)->man_name);
	char input = '1';
	while (input != '0')
	{
		getchar();
		show_manager_enter();
		printf("\t\t\t：");
		scanf("%c", &input);
		while (getchar() != '\n');

		switch (input)
		{
		case'1': Manager_Add_Book(manNum, man, book);  break; // 上架书籍
		case'2': Manager_Down_Book(manNum, man, book); break;// 下架书籍
		case'3': Print_Book(book); break;// 浏览书籍
		case'4': Manager_Manager_Stu(stu, man, book); break; // 管理学生账号
		case'5': Manager_Change_Password(manNum, man); break; // 修改密码
		case'0': Save_Student(stu); Save_Book(book); Save_Manager(man); break; //退出程序，保存链表数据至文件中
		default: printf("\t\t输入错误，请重新输入\n"); break;
		}
	}
}

void Print_Book(Book* book) //打印书单
{
	Book* tmp = book->next;
	printf("书号\t  书名\t\t\t 作者名\t   出版社\t\t价格\t存库\n");
	while (tmp != NULL)
	{
		printf("%s  %-20s  %-10s %-15s     %0.2f   %d\n",
				tmp->book_num,tmp->book_name,tmp->book_at_name,
				tmp->book_cp_name,tmp->book_price, tmp->book_rest);
		tmp = tmp->next;
	}
}

char* Manager_Login(Manager* man) //管理员登录
{
	Manager* manTmp = man->next;
	char man_acc[10]; //管理员账号
	char man_passw[15]; //管理员密码
	int num = 3;
	while (num > 0)
	{
		printf("请输入管理员账号（学号）：>");
		scanf("%s", man_acc);
		printf("请输入管理员密码：>");
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
				printf("密码错误！你还有%d次机会！\n", num - 1);
			}
		}
		else
		{
			char i = '2';
			printf("账号不存在！重新输管理员账号输入1\n退出输入0\n");
			scanf("%d", i);
			switch (i)
			{
			case '1': break;
			case '0': num = 0; break;
			default: printf("输入错误！"); break;
			}
		}
		num--;
	}
	return NULL;
}

void Manager_Add_Book(char* manNum, Manager* man, Book* book) //管理员上架书籍
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
	char book_num[10]; //书号
	char book_name[20]; //书名
	char book_at_name[30]; //作者名
	char book_cp_name[30]; //出版社
	float book_price; //价格
	int book_rest; //库存
	Book* bookTmp = book->next;
	printf("请输入要添加的书号！>");
	scanf("%s", book_num);
	while (bookTmp != NULL && strcmp(bookTmp->book_num, book_num) != 0)
	{
		bookTmp = bookTmp->next;
	}
	if (bookTmp != NULL && strcmp(bookTmp->book_num,book_num) == 0)
	{
		printf("当前存在该图书！存库加一\n");
		bookTmp->book_rest++;
	}
	else
	{
		Book* cur = (Book*)malloc(sizeof(Book));
		printf("请输入要添加的书名！>");
		scanf("%s", book_name);
		printf("请输入要添加的作者名！>");
		scanf("%s", book_at_name);
		printf("请输入要添加的出版社！>");
		scanf("%s", book_cp_name);
		printf("请输入要添加的价格！>");
		scanf("%f", &book_price);
		printf("请输入要添加的存库！>");
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
void Manager_Down_Book(char* manNum, Manager* man, Book* book) //管理员下架书籍
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
	char book_num[10]; //书号
	printf("请输入要下架的书号！>");
	scanf("%s", book_num);
	while (bookTmp != NULL && strcmp(bookTmp->book_num, book_num) != 0)
	{
		bookTmp = bookTmp->next;
	}
	if (bookTmp != NULL && strcmp(bookTmp->book_num, book_num) == 0)
	{
		if (bookTmp->book_rest == 0)
		{
			printf("该书存库为0");
		}
		else
		{
			bookTmp->book_rest--;
		}
	}
	else
	{
		printf("图书不存在！");
	}
}

void Manager_Manager_Stu(Student* stu, Manager* man, Book* book) //管理员管理学生
{
	char input = '1';
	while (input != '0')
	{
		manager_stu();
		printf("\t\t\t：");
		scanf("%c", &input);
		while (getchar() != '\n');

		switch (input)
		{
		case'1': Manager_Del_Stu(stu, book); break; // 删除学生号码并归还图书
		case'2': Manager_Change_StuPassword(stu); break;// 修改学生密码
		case'3': Manager_Look_Stu(stu); break;// 查看学生名单
		case'0': break; //退出程序，保存链表数据至文件中
		default: printf("\t\t输入错误，请重新输入\n"); break;
		}
	}
}
void Manager_Change_Password(char* manNum, Manager* man) //管理员修改密码
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
	char man_passw[15]; //管理员密码
	printf("请输入要修改的密码：>");
	scanf("%s", man_passw);
	strcpy(manTmp->man_passw, man_passw);
}
void Manager_Change_StuPassword(Student* stu) // 管理员修改学生密码
{
	Manager_Look_Stu(stu);
	char stuNum[10];
	printf("请输入要修改密码的学生的学号;>");
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
	char stu_passw[15]; //学生密码
	printf("请输入要修改的密码：>");
	scanf("%s", stu_passw);
	strcpy(stuTmp->stu_passw, stu_passw);
}
void Manager_Look_Stu(Student* stu) //管理员查看学生名单
{
	Student* stuTmp = stu->next;

	printf("学号\t   学生密码   学生姓名\t 学生电话\t借书数量  借的图书书号\n");
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

void Manager_Del_Stu(Student* stu, Book* book) // 删除学生号码并归还所有书籍
{
	Manager_Look_Stu(stu);
	char stuNum[10];
	printf("请输入要删除学生的号码;>");
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
void Save_Book(Book* book) //保存书籍链表至文件
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
void Save_Student(Student* Stu) //保存学生链表至文件
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
void Save_Manager(Manager* man) //保存管理员链表至文件
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
