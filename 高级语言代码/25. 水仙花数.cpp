//��Ŀ����ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ�������
//���磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int k=0;

	int a,b,c;
	for(int i=100;i<=999;i++){
	a=i%10;
	b=(i/10)%10;
	c=(i/100);
	if(pow(a,3)+pow(b,3)+pow(c,3)==i){ 
	cout<<i<<endl;
}
}
} 
