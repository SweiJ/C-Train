#include "BookManage.h"

int main(void)
{
	Book* Book_head = (Book*)malloc(sizeof(Book));
	Student* Student_head = (Student*)malloc(sizeof(Student));
	Manager* Manager_head = (Manager*)malloc(sizeof(Manager));
	
	Book_head->next = Book_load();
	Student_head->next = Student_load();
	Manager_head->next = Manager_load();
	
	char  input = '1';
	while (input != '0')
	{
		show_main();
		printf("\t\t\t��");
		scanf("%c", &input);
		while (getchar() != '\n');

		switch (input)
		{
			case'1':Student_Port(Student_head, Book_head); break; //ѧ����
			
			case'2':Manager_Port(Manager_head, Student_head, Book_head); break; //����Ա��

			//case'0':Massage_Save(); break; //�˳����򣬱��������������ļ���
			case'0': break;
			default:printf("\t\t�����������������\n"); break;
		}
	}
	system("pause");
	return 0;
}