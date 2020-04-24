#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int i;
	int a[10];
for(i=0;i<10;i++){
	cin>>a[i];
}
	sort(a,a+10);
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
} 
