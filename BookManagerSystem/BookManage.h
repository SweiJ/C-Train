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
	char stu_acc[10]; //ѧ���˺ţ�ѧ�ţ�
	char stu_passw[15]; //ѧ������
	//char stu_find_question[30]; //�ܱ�����
	//char stu_find_passw[15]; //�ܱ���������
	char stu_name[20]; //ѧ������
	char stu_tel[15]; //ѧ���绰
	int stu_bor_num; // ��������
	char stu_bor_book[10][20]; //�������
	struct stu* next; //��λѧ��
}Student;

// �鼮����

typedef struct book {
	char book_num[10]; //���
	char book_name[20]; //����
	char book_at_name[30]; //������
	char book_cp_name[30]; //������
	float book_price; //�۸�
	int book_rest; //���
	struct book* next; //�±���
}Book;

// ����Ա����

typedef struct manager {
	char man_name[15]; //����Ա����
	char man_acc[10]; //����Ա�˺�
	char man_passw[15]; //����Ա����
	struct manager* next; //�¸�����Ա
}Manager;

// ����

void show_main(); //������

void show_stu(); //ѧ����

void show_stu_enter(); //ѧ��

void show_manager(); //����Ա��

void manager_stu(); // ����ѧ��ҳ

Book* Book_load(); //���鼮�ļ��е���Ϣ�������鼮����

Student* Student_load(); //��ѧ���ļ��е���Ϣ������ѧ������

Manager* Manager_load(); //������Ա�ļ�����Ϣ����������Ա����

void Student_Port(Student* stu, Book* book); //ѧ���˿�

void Student_page(Student* stu, Book* book); // ѧ��ҳ

char* Student_Login(Student* stu); //ѧ���˵�¼

void Student_Register(Student* stu); //ѧ��ע���˺�

void Password_Input(char* Password); //�������뺯��

Student* Find_StuNum(char* stuNum, Student* stu); //��ѧ�Ų���ѧ��

void Stu_Borrow(char* stuNum, Student* stu, Book* book); //ѧ������

void Stu_Back(char* stuNum, Student* stu, Book* book); //ѧ������

void Find_Book(char* stuNum, Student* stu, Book* book); //������

void Find_Theborrow(char* stuNum, Student* stu, Book* book); //ѧ���鿴������

void Change_Stupassword(char* stuNum, Student* stu); //�޸�����

void Manager_Port(Manager* man, Student* stu, Book* book); //����Ա�˿�

void Manager_page(Manager* man, Student* stu, Book* book); // ����Աҳ

void Print_Book(Book* book); //��ӡ�鵥

char* Manager_Login(Manager* man); //����Ա��¼

void Manager_Add_Book(char* manNum, Manager* man, Book* book); //����Ա�ϼ��鼮

void Manager_Down_Book(char* manNum, Manager* man, Book* book); //����Ա�¼��鼮

void Manager_Manager_Stu(Student* stu, Manager* man, Book* book); //����Ա����ѧ��

void Manager_Change_Password(char* manNum, Manager* man); //����Ա�޸�����

void Manager_Change_StuPassword(Student* stu); // ����Ա�޸�ѧ������

void Manager_Look_Stu(Student* stu); //����Ա�鿴ѧ������

void Manager_Del_Stu(Student* stu, Book* book); // ɾ��ѧ�����벢�黹�����鼮

void Save_Book(Book* book); //�����鼮�������ļ�

void Save_Student(Student* Stu); //����ѧ���������ļ�

void Save_Manager(Manager* man); //�������Ա�������ļ�