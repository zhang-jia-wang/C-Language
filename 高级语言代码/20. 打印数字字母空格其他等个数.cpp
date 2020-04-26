//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
#include<iostream>
using namespace std;
int main(){
	char n;
	int q=0,w=0,e=0,other=0;
	
	while((n=getchar())!='\n'){
		
		if(n>='a'&&n<='z')
		q++;
		else if(n>='A'&&n<='Z')
		q++;
		else if(n==' ')
		w++;
		else if(n>=0&&n<=9)
		e++;
		else{
			other++;
		}
		
	}
	printf("字母个数:%d\n",q);
		printf("空格个数:%d\n",w);
			printf("数字个数:%d\n",e);
				printf("其他个数:%d\n",other);
}
