#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int i;
	int a[5];
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	sort(a,a+5);
	reverse(a,a+5);
	printf("输出最大年龄：%d",a[0]);
} 
