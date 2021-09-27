#pragma once

#define NAME_MAX 30
#define TELE_MAX 12
#define SEX_MAX 5
#define ADDR_MAX 30
#define MAX 10000

#include <stdio.h>
#include <string.h>

struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

struct Contact
{
	struct PeoInfo data[MAX];
	int sz;
};
// ��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);
// ������ϵ��
void AddContact(struct Contact* pc);
// ��ʾ������ϵ��
void ShowContact(struct Contact* pc);
// ɾ��ָ����ϵ��
void DelContact(struct Contact* pc);
// ����ָ����ϵ��
void SearchContact(const struct Contact* pc);
// �޸�ָ����ϵ��
void ModifyContact(struct Contact* pc);