//��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
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
	printf("��ĸ����:%d\n",q);
		printf("�ո����:%d\n",w);
			printf("���ָ���:%d\n",e);
				printf("��������:%d\n",other);
}
