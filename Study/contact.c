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
		printf("ͨѶ¼���ˣ�\n");
	}
	else
	{
		printf("���������֣�>");
		scanf("%s", tmp.name);
		printf("���������䣺>");
		scanf("%d", &tmp.age);
		printf("�������Ա�>");
		scanf("%s", tmp.sex);
		printf("������绰��>");
		scanf("%s", tmp.tele);
		printf("�������ַ��>");
		scanf("%s", tmp.addr);
		
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
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
	// �Ҳ���
	return -1;
}
void DelContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	char name[NAME_MAX] = { 0 };
	printf("������Ҫɾ���˵����֣�>");
	scanf("%s", name);
	// ����
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("ָ������ϵ�˲�����\n");
	}
	else
	{
		// ɾ��
		int j = 0;
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("����Ҫ���ҵ����֣�>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("���޴��ˣ�\n");
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
	printf("����Ҫ�޸ĵ����֣�>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ��˲����ڣ�\n");
	}
	else
	{
		printf("�������µ����֣�>");
		scanf("%s", pc->data[pos].name);
		printf("�������µ����䣺>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������µ��Ա�>");
		scanf("%s", pc->data[pos].sex);
		printf("�������µĵ绰��>");
		scanf("%s", pc->data[pos].tele);
		printf("�������µĵ�ַ��>");
		scanf("%s", pc->data[pos].addr);
	}
}