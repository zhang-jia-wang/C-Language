#include<iostream>
using namespace std;
int main(){
	int sum=0,i,t;
	int a=2,b=1;
	for(i=1;i<=20;i++){
		sum=sum+a/b;
		t=a;
		a=a+b;
		b=t;

	}
			cout<<sum<<endl;
} 
