#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
	
	if(n>=90&&n<=100){
		cout<<"A"<<endl;
	}
	else if(n<60&&n>=0){
		cout<<"C"<<endl;
	}
	else if(n<0||n>100){
		cout<<"error"<<endl;
	}
	else{
		cout<<"B"<<endl;
	}
}
} 
