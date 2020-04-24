//创建一个链表
#include<iostream>
#include<stdlib.h> 
using namespace std;
struct list{
	int data;
	struct list*next;
}; 
typedef struct list node;
typedef node *link;
int main(){
	link p,head;
	int i,num;
	p=(link)malloc(sizeof(node));
	p=head;
	for(i=0;i<=4;i++){
		cin>>num;
		p->data=num; 
		p->next=(link)malloc(sizeof(node));
		if(i==4) 
		p->next=NULL;
		
		else 
			p=p->next; 
	}
	p=head ;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
