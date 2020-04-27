//题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	char a[6];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	reverse(a,a+5);
	for(int i=0;i<5;i++){
		cout<<a[i];
	}
}
