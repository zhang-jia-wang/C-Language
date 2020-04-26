/*有一对兔子，从出生后第四个月起每个月都生一对兔子，小兔子长到第四个月后每个月又生一对兔子。假如兔子都不死，计算第十个月兔子的总数？

分析：

四个月开始生兔子，则：F(N) = f(n-1)+ f(n-3)。可以运用递归来解决问题。

如果当出生后第三个月开始生兔子： F(N) = f(n-1)+ f(n-2)

如果出生后第二个月开始生兔子：  F(N) = f(n-1)+ f(n-1) = 2*F（n-1）

如果出生后第一个月开始生：
*/
#include<iostream>
using namespace std;
int fac(int n){
	if(n==1||n==2)  return 1;
	else return fac(n-1)+fac(n-2);
}
int main(){

  	cout<<fac(12)<<endl;
}








