#define _CRT_SECURE_NO_WARNINGS 1

#include "dyContact.h"

void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	pc->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	pc->capacity = DEFAULT_SZ;
}

void AddContact(struct Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		struct PeoInfo* ptr = realloc(pc->data, (pc->capacity + 2)*sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += 2;
			printf("增容成功！");
		}
		else
		{
			return;
		}
	}
	printf("请输入名字：>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄：>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入性别：>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话：>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址：>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("增加成功！");
}

void DestoryContact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

void ShowContact(struct Contact* pc)
{
	int i = 0;
	printf("%10s\t%5s\t%8s\t%15s\t%30s\n\n", "name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%10s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}


int FindContactByName(const struct Contact* pc, const char name[])
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
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
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
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("输入要查找的名字：>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("查无此人！\n");
	}
	else
	{
		printf("%10s\t%5s\t%8s\t%15s\t%30s\n\n", "name", "age", "sex", "tele", "addr");
		printf("%10s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

void ModifyContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("输入要修改的名字：>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("要修改的人不存在！\n");
	}
	else
	{
		printf("请输入新的名字：>");
		scanf("%s", pc->data[pos].name);
		printf("请输入新的年龄：>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入新的性别：>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入新的电话：>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入新的地址：>");
		scanf("%s", pc->data[pos].addr);
	}
}

void SortContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	int i, j;
	struct PeoInfo tmp = { 0 };
	for (i = 0; i < pc->sz - 1; i++)
		for (j = 0; j < pc->sz - i - 1; j++)
			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
			{
				tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
			}
	ShowContact(pc);
}