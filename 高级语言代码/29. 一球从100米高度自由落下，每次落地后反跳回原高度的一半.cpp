//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
//再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
#include <iostream>
using namespace std;

int main() {
	double sum = 0, high = 100;//sum为路径总和，high表示当前高度
	for (int i = 0; i < 10; i++) {
		sum = high + high / 2 + sum;//一次落地距离+弹起距离+已经过路程
		high /= 2;//弹起高度为一半
	}
	sum -= high;//求第10次落地经过路程需减去第10次弹起距离
	cout << "共经过：" << sum << "米\n"<< "第10次反弹高度为：" << high << "米";
}

