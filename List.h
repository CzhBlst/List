typedef int ElemType;

typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

LinkList CreateList_Tail(int n);
LinkList CreateList_Head(int n);
void printList_Head(LinkList L);
void printList_Tail(LinkList L);
ElemType deleteList_Tail(LinkList *L,int i);
ElemType deleteList_Head(LinkList *L,int i);
int InsertList_Head(LinkList *L,int i,ElemType e);
LinkList MergeList(LinkList *L1,LinkList *L2);
