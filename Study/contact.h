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
// 初始化通讯录
void InitContact(struct Contact* pc);
// 增加联系人
void AddContact(struct Contact* pc);
// 显示所有联系人
void ShowContact(struct Contact* pc);
// 删除指定联系人
void DelContact(struct Contact* pc);
// 查找指定联系人
void SearchContact(const struct Contact* pc);
// 修改指定联系人
void ModifyContact(struct Contact* pc);