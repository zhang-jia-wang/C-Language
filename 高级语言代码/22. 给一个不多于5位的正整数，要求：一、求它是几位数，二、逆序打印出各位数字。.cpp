//题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int i,x,k=0;
	int a[6];
	cin>>x;
	while(x>0){
		a[k]=x%10;
		x=x/10;
		k++;
	}

		cout<<k<<endl;
	for(i=0;i<k;i++){
		cout<<a[i];
	}
} 
