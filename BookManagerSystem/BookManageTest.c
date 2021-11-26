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
		printf("\t\t\t：");
		scanf("%c", &input);
		while (getchar() != '\n');

		switch (input)
		{
			case'1':Student_Port(Student_head, Book_head); break; //学生端
			
			case'2':Manager_Port(Manager_head, Student_head, Book_head); break; //管理员端

			//case'0':Massage_Save(); break; //退出程序，保存链表数据至文件中
			case'0': break;
			default:printf("\t\t输入错误，请重新输入\n"); break;
		}
	}
	system("pause");
	return 0;
}