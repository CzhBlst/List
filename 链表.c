#include<stdio.h>
#include<stdlib.h>
#include"List.h"
#define LEN sizeof(LNode)
LinkList CreateList_Head(int n){
	LinkList L=(LinkList *)malloc(LEN);
//	L->next=NULL;	
	int i;
	L->next=NULL;
	LNode *p=malloc(LEN);
	for(i=n;i>0;i--){	
		p=malloc(LEN);	
		scanf("%d",&p->data);
		p->next=L->next;
		L->next=p;			
	}
	return L;
}
LinkList CreateList_Tail(int n){
	LinkList Head=(LinkList *)malloc(LEN);
	LNode *p,*t;
	t=Head;
	int i;	
	for(i=n;i>0;i--){
		p=malloc(LEN);
		scanf("%d",&p->data);
		t->next=p;
		t=p;
	}
	t->next=NULL;
	return Head;
}
void printList_Head(LinkList L){
	while(L->next!=NULL){  
		L=L->next;   	
    	printf("%d\t",L->data); 	 	
	}
} 
void printList_Tail(LinkList L){
	while(L->next!=NULL){ 
		L=L->next;  		 	
		printf("%d\t",L->data); 	  	
	}
} 
ElemType deleteList_Tail(LinkList *L,int i){
	ElemType delData;
	LNode *p;
	p=L;
	int j=0;
	while(p->next&&j<i-1){
		p=p->next;j++;//找到所删除节点的前驱 
	}
	if(!(p->next)||j>i-1){
		exit(1);
	}	
	LNode *q=p->next;//q为所删除节点 
	delData=q->data;//将所删除节点的数据赋值给delData 
	p->next=q->next;//将所删除节点的前驱指向其后继 
	free(q);
	return delData; 
}
ElemType deleteList_Head(LinkList *L,int i){
	ElemType delData;
	LNode *p;
	p=L;
	int j=0;
	while(p->next&&j<i-1){
		p=p->next;j++;
	}
	if(!(p->next)||j>i-1){
		exit(1);
	}
	LNode *q=p->next;
	delData=q->data;
	p->next=q->next;
	free(q);	
	return delData; 
}
int InsertList_Head(LinkList *L,int i,ElemType e){
	LNode *p=malloc(LEN);
	p->data=e;
	int j=0;
	LNode *a;
	a=L;
	while(a&&j<i-2){
		a=a->next;
		j++;
	}
	if(!(a->next)||j>i-2){
		return 0;
	}
	p->next=a->next;
	a->next=p;
	return 1;
}
LinkList MergeList(LinkList *L1,LinkList *L2){
	LinkList *L=(LinkList *)malloc(LEN);
	LNode *p1,*p2,*p;
	p1=L1;
	p2=L2;
	L=p=L1;
	p1=p1->next;
	p2=p2->next;	
	while(p1&&p2){
		if(p1->data<=p2->data){
			p->next=p1;p=p1;p1=p1->next; 
		}else{
			p->next=p2;p=p2;p2=p2->next;
		}
	}
	if(p1){
		p->next=p1;
	}else if(p2){
		p->next=p2; 
	}
//	free(L2);
	return L;
}

