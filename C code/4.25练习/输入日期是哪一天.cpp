//题目：输入某年某月某日，判断这一天是这一年的第几天？
#include<iostream>
using namespace std;
int run(int x){
	if(x%400==0||(x%4==0&&x%100!=0))
	return 1;
	else 
	return 0;
}
int main() {
	int y,m,d;
	cin>>y;
	cin>>m;
	cin>>d;
	int sum=0;
	int count=0;

if(m==1) sum=0;
else if(m==2) sum=31;
else if(m==3) sum=59;
else if(m==4) sum=90;
else if(m==5) sum=120;
else if(m==6) sum=151;
else if(m==7) sum=181;
else if(m==8) sum=212;
else if(m==9) sum=243;
else if(m==10) sum=273;
else if(m==11)	sum=304;
else if (m==12)	sum=334;


if(run(y))
	count=sum+d+1;
 else 
	count=sum+d;

cout<<count<<endl;
}

