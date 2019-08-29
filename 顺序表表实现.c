#include<stdio.h>
#include<stdlib.h>
#include "SqList.h"
//#define LISTINITSIZE 100
//#define LISTINCREMENT 10
//typedef int ElemType;
//
//typedef struct{
//	ElemType *elem;
//	int length;
//	int listsize;
//}SqList;

//��ʼ������ 
SqList InitList (){
	SqList L;
	L.elem=(ElemType *)malloc(LISTINITSIZE*sizeof(ElemType));
	if(!L.elem) exit(1);
	L.length=0;
	L.listsize=LISTINITSIZE;
	return L;
}
//�ڳ�ʼ�ռ䲻��ʱ����ռ� 
void AddSize(SqList *L){
	ElemType newbase=(ElemType *)realloc(L->elem,(L->listsize+LISTINCREMENT)*sizeof(ElemType));
	if(!newbase) exit(1);
	L->elem=newbase;
	L->listsize+=LISTINCREMENT; 
}
//������� 
int ListInsert(SqList *L,int i,ElemType e){
	if(i<1||i>L->length+1){ printf("��������������λ��"); return 0; }//����λ�ô���ʱ�˳� 
	if(L->length>=L->listsize){
		AddSize(L);
	}
	int *q=&(L->elem[i-1]);//qΪ����λ��
	int *p;
	for(p=&(L->elem[L->length-1]);p>=q;--p){
		*(p+1)=*p;//������λ��֮���Ԫ������ 
	} 
	*q =e;
	++L->length;	
	return 1;
} 
//ɾ������
int ListDelete(SqList *L,int i){
	int x;//XΪɾ��Ԫ�ص�ֵ
	if(i<1||i>L->length){
		printf("ɾ��λ�ò��Ϸ�");
		return 0;
	} 
	x=L->elem[i-1];
	int *q=&(L->elem[i-1]);
	int *p=&(L->elem[L->length-1]);
	for(p;q<=p;q++){
		*(q)=*(q+1);
	}
	L->length--;
	return x;
} 
//���Ҳ���
ElemType ListSearch(SqList *L,int i){
	ElemType x;
	if(i<1||i>L->length){
		printf("����λ�ò��Ϸ�");
		return 0;
	} 
	x=L->elem[i-1];
	return x;
} 
//��λ
int ListLocate(SqList *L,ElemType e){
	int i;	
	for(i=0;i<=L->length-1;i++){
		if(L->elem[i]==e){
			return i+1;
		}
	}
	return 0;
} 
//�ϲ�
SqList ListMerge(SqList L1,SqList L2){
	SqList L3=InitList();
	int *p1=L1.elem;
	int *p2=L2.elem;
	L3.listsize=L3.length=L1.length+L2.length;
	int *p3=L3.elem=(ElemType *)malloc(L3.listsize*sizeof(ElemType));
	if(!L3.elem) exit(1);
	int *p1_last=L1.elem+L1.length-1;
	int *p2_last=L2.elem+L2.length-1;
	while(p1<=p1_last&&p2<=p2_last){
		if(*p1<=*p2){
			*p3++=*p1++;	
		}else{
			*p3++=*p2++;
		}
	}
	while(p1<=p1_last){
		*p3++=*p1++;
	}
	while(p2<=p2_last){
		*p3++=*p2++;
	}
	return L3;
} 
//��ʼ����������
 
//int main(){
//	SqList L=InitList();
//	if(L.listsize==100){
//		 
//	}else{
//		printf("Failure");
//	}
//	SqList *List=&L;
//	int check=ListInsert(List,1,12);
//	if(check==1){
//		int i;
//		for(i=0;i<L.length;i++){
//			printf("%d\t",L.elem[i]);
//		}
//	}
//	return 0;
//}


