#include<iostream>
#include<algorithm> 
using namespace std;

int main(){
		int i,j,s;
		for(i=2;i<1000;i++)
		{
			s=0;//每校验一个数,令求和变量为0
			for(j=i-1;j>0;j--)
			{//内循环 
				if(i%j==0)
				{
					s=s+j;
				} 
		}
		if(s==i)
		{
			cout<<i<<endl;
		} 
	}
}
