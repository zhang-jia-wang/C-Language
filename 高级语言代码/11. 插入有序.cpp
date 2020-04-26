//题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int i,num;
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	sort(a,a+n);
cin>>num; 
	int k=0;
	while(k<n&&a[k]<num){
		k++;
	}
	for(int j=n;j>k;j--){
		a[j]=a[j-1];
	}
		a[k]=num;
		n++;		
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

