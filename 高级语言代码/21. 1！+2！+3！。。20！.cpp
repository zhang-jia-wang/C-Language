//1！+2！+3！。。20！
#include<iostream>
using namespace std;
int fac(int n){

if(n==1)
return 1;
else
return n*fac(n-1);
}
int main(){
	int i;
	int sum=0;
	for(i=1;i<=20;i++){
		sum=sum+fac(i);
	}
	cout<<sum<<endl;
} 
//或 
//#include<stdio.h>
//int main(void)
//{
//int s,i,sum=0;
//s=1;
//for(i=1;i<=20;i++)
//{s*=i;
//sum+=s;} //for需要包含这两句
//printf("%ld\n",sum);
//}
