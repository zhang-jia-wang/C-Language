 //1. �ж���������
  int prim(int x){
  	if(x<=3)	
	  return 1;
  	else{
  	for(int i=2;i<x;i++){
	  if(x%i==0)  
	 	 return 0;
	  }
}
	  return 1;
  } 
//2. ����ɾ���Ĵ���
for(i=0;i<n;i++) {
	if(��������){
		for(j=i;j<n-1;j++){
			a[j]=a[j+1];
		} 
		i--;
		n--;
	} 
}
//3. n!�ݹ����
int fac(int n){
	if(n==0) 
	return 1;
return n*fac(n-1);
} 


//4. ���ڴ��ַ��Ĵ����������
 struct date{
 	int y,d,m;
 }; 
 struct teacher{
 	char id[10];
 	int name[10];
 	struct date birth;
 	struct teacher*next ;
 }*linklist, node;
linklist create(){
	node*head=null;
	node *p1,*p2;
	char tid[10];
	scanf("%s",tid);
	while(strcmp(tid,"0000")!=0){
		p1=(node*)malloc(sizeof(node));
		strcpy(tid,p1->id);
		scanf("%d %d %d %d",p1->name,&p1->birth.y,&p1-borth.m,&p1->birth.d);
			if(head!=null)
			{
				head=p1;
				p1->next=null;
			}
			else if(strcmp(p1->id,head->id)<0)
			{//���� 
				p1-next=head;
				head=p1
			}
			else
			{
				p2=head;
				while(strcmp(p1->id,p2->id)>0)	{
					p2=p2->next;
					p1->next=p2->next;
					p2->next=p1;
				}
				scanf("%s",tid);
			}
			return head;		
		
	}	
}

//5. ���ַŵ����鵱��
while(n>0){
	a[k]=n%10;
	n=n/10;
	k++;
} 
//6. ���������������������ӡ
for(i=0;i<k;i++){
	w=w*10+a[i];
	cout<<w<<endl;
//7.�ϲ��������飬����֤���� 
#include<iostream>
#include<algorithm> 
using namespace std;
int main(){
	int a[3]={1,5,9};
	int b[4]={6,3,7,2};
	int w[7];
	int i=0,j=0,k=0;
while(i<3) {
	w[k++]=a[i++];
}
while(j<4){

	w[k++]=b[j++];
}
sort(w,w+7); 
for(int i=0;i<7;i++) {
	printf("%d ",w[i]);
}	
}

//8.���Լ������С������
#include<stdio.h>
int main()
{
	int x, y, z, m, n;
	printf("��������������");
	scanf_s("%d%d", &x, &y);
	m = x, n = y;
	while (y != 0)//շת��� 
	{
		z = x%y;
		x = y;
		y = z;
	}
	printf("���Լ����: %d\n", x);
	printf("��С��������: %d\n", m*n / x);
	return 0;
}
//9. ����һ������
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

//10.�ַ������� 
int main(){
	char a[10];
	char b[10];
	cin>>a;
	cin>>b; 
	strcat(a,b);
	cout<<a<<endl;
} 

//11.��һ���������������� 

int main()
{
    int number, i;
    scanf("%d",&number);
    for(i=1; i <= number; i++)
    {
        if (number%i == 0)
        {
            printf("%d ",i);
        }
    }
 
    return 0;
}

//12.��������=��������
int main(){
		int i,j,s;
		for(i=2;i<1000;i++)
		{
			s=0;//ÿУ��һ����,����ͱ���Ϊ0
			for(j=i-1;j>0;j--)
			{//��ѭ�� 
				if(i%j==0)
				{
					s=s+j;
				} 
		}
		if(s==i)
		{
			cout<<i<<endl;
		} 
	} 

13. ��������
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
	p=tail;//βָ�� 
	for(i=0;i<5;i++){
		cin>>num;
		p->data=num;
		head=(link)malloc(sizeof(node));
		head->next=p;//ͷ��һ��ָ��β 
		p=head;//βָ��ͷ ��β�巨 
	}
	p=p->next;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
} 








