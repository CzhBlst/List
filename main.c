#include <stdio.h>
#include <stdlib.h>
#include "SqList.h"
#include "List.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//顺序表基本功能测试 
//	SqList L=InitList();
//	if(L.listsize==100){
//		 
//	}else{
//		printf("Failure");
//	}
//	SqList *List=&L;
//	ListInsert(List,1,12);
//	ListInsert(List,2,34);
//	ListInsert(List,3,56);
//	ListInsert(List,4,78);
//	int delData=ListDelete(List,3);
//	printf("所删除元素为%d\n",delData);
//	int i;
//	for(i=0;i<L.length;i++){
//		printf("%d\t",L.elem[i]);
//	}	
//	int findData=ListLocate(List,78);
//	printf("\n所查找元素为%d\n",findData);
//	int searchData=ListSearch(List,2);
//	printf("所定位元素值为%d\n",searchData);

    //合并链表
//	SqList L1=InitList();
//	SqList L2=InitList();
//	SqList *List1=&L1;
//	SqList *List2=&L2;
//	int i=0;
//	int L1_elem=1;
//	int L2_elem=1;
//	for(i=0;i<=100;i++){
//		if(i%2==0){
//			ListInsert(List1,L1_elem,i);
//			L1_elem++;
//		}else{
//			ListInsert(List2,L2_elem,i);
//			L2_elem++;
//		}
//	} 
//	for(i=0;i<L1.length;i++){
//		printf("%d\t",L1.elem[i]);
//	}	
//	printf("\n");
//	for(i=0;i<L2.length;i++){
//		printf("%d\t",L2.elem[i]);
//	}	
//	SqList L3=InitList();
//	L3=ListMerge(L1,L2);
//	printf("\n");
//	for(i=0;i<L3.length;i++){
//		printf("%d\t",L3.elem[i]);
//	}		

//链表基本功能 
//    LinkList LH=(LinkList *)malloc(sizeof(LNode));
    //LinkList LT=(LinkList *)malloc(sizeof(LNode));
    //LT=CreateList_Tail(3);//尾插法 
//    LH=CreateList_Head(3);//头插法 
    //printList_Tail(LT);
//	printList_Head(LH);   
	LinkList LH1=(LinkList *)malloc(sizeof(LNode));
	LinkList LH2=(LinkList *)malloc(sizeof(LNode));
	LH1=CreateList_Head(3);//头插法
	LH2=CreateList_Head(3);//头插法
	printList_Head(LH1); 
	printList_Head(LH2); 
	printf("\n");
	LinkList LH=(LinkList *)malloc(sizeof(LNode));
	LH=MergeList(LH1,LH2);
	printList_Head(LH);
//    ElemType delData1=deleteList_Tail(LT,2);
//    printf("\n%d\n",delData1);
//    printList_Tail(LT);
//    ElemType delData2=deleteList_Head(LH,2);
//    printf("\n%d\n",delData2);
//    printList_Head(LH);
	return 0;
}
