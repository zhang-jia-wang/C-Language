//��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
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
