#include<iostream>
#include<algorithm>
using namespace std; 
int main(){
	int i,max=0,min=0;
	int a[5];
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	int first=a[0];
	int last=a[5];
	sort(a,a+5);
	min=a[0];
	reverse(a,a+5);
	max=a[0];
	swap(first,max);
	swap(last,min);
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
	
}
