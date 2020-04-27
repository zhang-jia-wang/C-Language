//#include<iostream>
//using namespace std;
//int main(){
//	int x;
//	cin>>x;
//	int i;
//	float sum=0.00;
//	if(x%2==0){
//		for(i=x;i>=0;i-=2){			
//				sum=sum+1.0/x;
//		} 
//		} 
//			else if(x%2==1){				
//				for(i=x;i>=0;i-=2){			
//				sum=sum+1.0/x;
//		} 
//		} 
//			
//		
//	printf("%.1f",sum);
//	
//} 
#include <stdio.h>
void h1 (int a);
void h2 (int b);
int main()
{
    int n, i;
    printf ("请输入n的值");
    scanf ("%d",&n);

    if (n % 2 == 0)
    {
        h1 (n);
    }
    
    if (n % 2 == 1)
    {
        h2 (n);
    }

    return 0;
}

void h1 (int a)
{
    int i;
    float sum = 0.0;
    for (i = a; i >= 0; i -= 2)//判断条件出错！
    {
        sum += 1.0 / a;
    }
    printf ("1/2+1/4+...+1/n的值为:%.1f \n", sum);
}

void h2 (int b)
{
    int j;
    float add=0.0;
    for (j = b; j >= 0; j -= 2)//判断条件出错！
    {
        add += 1.0 / b;
    }
    printf ("1/1+1/3+...+1/n的值为：%.1f \n", add);
}
