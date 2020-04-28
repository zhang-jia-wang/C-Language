//题目：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
#include <stdio.h>

int main()
{
	void exchange_m(int *p, int n, int m);
	int num[100],*p=num,n,m;
	printf("您打算输入多少个整数:");
	scanf("%d", &n);
	printf("请依次输入%d个整数，空格隔开:\n", n);
	for(;p<num+n;p++){
		scanf("%d", p);
	}
	printf("您输入的整数如下:\n");
	for(p=num;p<num+n;){
		printf("%5d", *p++);
	}
	printf("\n您打算往后移动多少位:");
	scanf("%d", &m);
	exchange_m(num, n, m);
	printf("交换后的整数排序如下:\n");
	for(p=num;p<num+n;){
		printf("%5d", *p++);
	}
	return 0; 
} 

void exchange_m(int *p, int n, int m)
{
	// 首先，先将所有的都往后移动m位
	int *last=p+n-1,*first=p;
	for(;last>p-1;last--){
		*(last+m) = *last;
	} 
	// 然后，前面m位就等于后面m位 
	for(last=p+n;first<p+m;){
		*first++ = *last++;
	} 
}

