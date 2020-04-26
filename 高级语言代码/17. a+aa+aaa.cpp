#include<iostream>
using namespace std;
int main(){
	int count=1;
	int sum=0;
	int t=0;
	int n;
	cin>>n;
	int a,s=0;
	cin>>a;
	while(count<=n){
		t=t+a;
		s=s+t;
		a=a*10;
		count++;
	} 
	cout<<s<<endl;
	

} 
