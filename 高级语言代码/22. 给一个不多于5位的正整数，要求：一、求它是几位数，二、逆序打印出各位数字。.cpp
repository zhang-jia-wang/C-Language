//��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
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
