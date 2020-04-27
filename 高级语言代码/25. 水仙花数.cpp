//题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数本身。
//例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
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
