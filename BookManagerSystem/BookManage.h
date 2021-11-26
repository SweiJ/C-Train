#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<Windows.h>

#include <sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>

typedef struct stu {
	char stu_acc[10]; //学生账号（学号）
	char stu_passw[15]; //学生密码
	//char stu_find_question[30]; //密保问题
	//char stu_find_passw[15]; //密保问题密码
	char stu_name[20]; //学生姓名
	char stu_tel[15]; //学生电话
	int stu_bor_num; // 借书数量
	char stu_bor_book[10][20]; //所借书号
	struct stu* next; //下位学生
}Student;

// 书籍链表

typedef struct book {
	char book_num[10]; //书号
	char book_name[20]; //书名
	char book_at_name[30]; //作者名
	char book_cp_name[30]; //出版社
	float book_price; //价格
	int book_rest; //库存
	struct book* next; //下本书
}Book;

// 管理员链表

typedef struct manager {
	char man_name[15]; //管理员姓名
	char man_acc[10]; //管理员账号
	char man_passw[15]; //管理员密码
	struct manager* next; //下个管理员
}Manager;

// 函数

void show_main(); //主界面

void show_stu(); //学生端

void show_stu_enter(); //学生

void show_manager(); //管理员端

void manager_stu(); // 管理学生页

Book* Book_load(); //将书籍文件中的信息加载至书籍链表

Student* Student_load(); //将学生文件中的信息加载至学生链表

Manager* Manager_load(); //将管理员文件的信息加载至管理员链表

void Student_Port(Student* stu, Book* book); //学生端口

void Student_page(Student* stu, Book* book); // 学生页

char* Student_Login(Student* stu); //学生端登录

void Student_Register(Student* stu); //学生注册账号

void Password_Input(char* Password); //输入密码函数

Student* Find_StuNum(char* stuNum, Student* stu); //按学号查找学生

void Stu_Borrow(char* stuNum, Student* stu, Book* book); //学生借书

void Stu_Back(char* stuNum, Student* stu, Book* book); //学生还书

void Find_Book(char* stuNum, Student* stu, Book* book); //查找书

void Find_Theborrow(char* stuNum, Student* stu, Book* book); //学生查看所借书

void Change_Stupassword(char* stuNum, Student* stu); //修改密码

void Manager_Port(Manager* man, Student* stu, Book* book); //管理员端口

void Manager_page(Manager* man, Student* stu, Book* book); // 管理员页

void Print_Book(Book* book); //打印书单

char* Manager_Login(Manager* man); //管理员登录

void Manager_Add_Book(char* manNum, Manager* man, Book* book); //管理员上架书籍

void Manager_Down_Book(char* manNum, Manager* man, Book* book); //管理员下架书籍

void Manager_Manager_Stu(Student* stu, Manager* man, Book* book); //管理员管理学生

void Manager_Change_Password(char* manNum, Manager* man); //管理员修改密码

void Manager_Change_StuPassword(Student* stu); // 管理员修改学生密码

void Manager_Look_Stu(Student* stu); //管理员查看学生名单

void Manager_Del_Stu(Student* stu, Book* book); // 删除学生号码并归还所有书籍

void Save_Book(Book* book); //保存书籍链表至文件

void Save_Student(Student* Stu); //保存学生链表至文件

void Save_Manager(Manager* man); //保存管理员链表至文件