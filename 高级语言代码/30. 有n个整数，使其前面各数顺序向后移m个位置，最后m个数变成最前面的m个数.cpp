//��Ŀ����n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m����
#include <stdio.h>

int main()
{
	void exchange_m(int *p, int n, int m);
	int num[100],*p=num,n,m;
	printf("������������ٸ�����:");
	scanf("%d", &n);
	printf("����������%d���������ո����:\n", n);
	for(;p<num+n;p++){
		scanf("%d", p);
	}
	printf("���������������:\n");
	for(p=num;p<num+n;){
		printf("%5d", *p++);
	}
	printf("\n�����������ƶ�����λ:");
	scanf("%d", &m);
	exchange_m(num, n, m);
	printf("�������������������:\n");
	for(p=num;p<num+n;){
		printf("%5d", *p++);
	}
	return 0; 
} 

void exchange_m(int *p, int n, int m)
{
	// ���ȣ��Ƚ����еĶ������ƶ�mλ
	int *last=p+n-1,*first=p;
	for(;last>p-1;last--){
		*(last+m) = *last;
	} 
	// Ȼ��ǰ��mλ�͵��ں���mλ 
	for(last=p+n;first<p+m;){
		*first++ = *last++;
	} 
}

