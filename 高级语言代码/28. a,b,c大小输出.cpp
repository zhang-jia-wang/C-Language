#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[4];
	for(int i=0;i<3;i++){
		cin>>a[i];
	}
	sort(a,a+3);
	for(int j=0;j<3;j++){
		cout<<a[j];
	}
}
 
