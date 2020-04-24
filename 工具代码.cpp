 //1. 判断素数代码
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
//2. 数组删除的代码
for(i=0;i<n;i++) {
	if(条件成立){
		for(j=i;j<n-1;j++){
			a[j]=a[j+1];
		} 
		i--;
		n--;
	} 
}
//3. n!递归代码
int fac(int n){
	if(n==0) 
	return 1;
return n*fac(n-1);
} 


//4. 对于带字符的创建链表操作
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
			{//插入 
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

//5. 数字放到数组当中
while(n>0){
	a[k]=n%10;
	n=n/10;
	k++;
} 
//6. 将数组里面数变成整数打印
for(i=0;i<k;i++){
	w=w*10+a[i];
	cout<<w<<endl;
//7.合并两个数组，并保证有序 
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

//8.最大公约数，最小公倍数
#include<stdio.h>
int main()
{
	int x, y, z, m, n;
	printf("请输入两个数：");
	scanf_s("%d%d", &x, &y);
	m = x, n = y;
	while (y != 0)//辗转相除 
	{
		z = x%y;
		x = y;
		y = z;
	}
	printf("最大公约数是: %d\n", x);
	printf("最小公倍数是: %d\n", m*n / x);
	return 0;
}
//9. 创建一个链表
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

//10.字符串连接 
int main(){
	char a[10];
	char b[10];
	cin>>a;
	cin>>b; 
	strcat(a,b);
	cout<<a<<endl;
} 

//11.求一个整数的所有因数 

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

//12.完数：数=各因数和
int main(){
		int i,j,s;
		for(i=2;i<1000;i++)
		{
			s=0;//每校验一个数,令求和变量为0
			for(j=i-1;j>0;j--)
			{//内循环 
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

13. 链表逆置
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
	p=tail;//尾指针 
	for(i=0;i<5;i++){
		cin>>num;
		p->data=num;
		head=(link)malloc(sizeof(node));
		head->next=p;//头下一个指向尾 
		p=head;//尾指向头 ，尾插法 
	}
	p=p->next;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
} 








