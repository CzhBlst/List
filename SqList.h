#include<stdio.h>
#define LISTINITSIZE 100
#define LISTINCREMENT 10
typedef int ElemType;

typedef struct{
	ElemType *elem;
	int length;
	int listsize;
}SqList;

SqList InitList ();
void AddSize(SqList *L);
int ListInsert(SqList *L,int i,ElemType e);
void printX();
SqList ListMerge(SqList L1,SqList L2);
