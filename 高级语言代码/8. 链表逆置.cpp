#include<iostream>
#include<stdlib.h>
using namespace std;
struct list{
	int data;
	struct list*next;
}; 
typedef struct list node;
typedef struct list *link;
int main(){
	link p,head,tail;
	int i,num;
	tail=(link)malloc(sizeof(node));
	tail->next=NULL;
	p=tail;
	for(i=0;i<5;i++){
		cin>>num;
		p->data=num;
		head=(link)malloc(sizeof(node));
		head->next=p;
		p=head;
	}
	p=p->next;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
