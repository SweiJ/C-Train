#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(struct Contact* pc)
{
	struct PeoInfo tmp = { 0 };
	if (pc->sz == MAX)
	{
		printf("通讯录满了！\n");
	}
	else
	{
		printf("请输入名字：>");
		scanf("%s", tmp.name);
		printf("请输入年龄：>");
		scanf("%d", &tmp.age);
		printf("请输入性别：>");
		scanf("%s", tmp.sex);
		printf("请输入电话：>");
		scanf("%s", tmp.tele);
		printf("请输入地址：>");
		scanf("%s", tmp.addr);
		
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
}

void ShowContact(struct Contact* pc)
{
	int i = 0;
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n\n", "name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}


int FindContactByName(struct Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	// 找不到
	return -1;
}
void DelContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("请输入要删除人的名字：>");
	scanf("%s", name);
	// 查找
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("指定的联系人不存在\n");
	}
	else
	{
		// 删除
		int j = 0;
		for (j = pos; j < ; j++)
		{

		}
	}

}