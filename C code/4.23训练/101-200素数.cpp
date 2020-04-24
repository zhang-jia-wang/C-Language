#include<iostream>
#include<algorithm> 
using namespace std;
int prim(int x){
	if(x<3)
	return 1;
	for(int i=2;i<x/2;i++){
		if(x%i==0)
		return 0;
	
	}
	return 1;
} 
int main(){
	int i;
	int count=0;
	for(i=101;i<=200;i++){
		if(prim(i)){
			count++;
			cout<<i<<endl;
		}
	}
	printf("Ò»¹²%d¸ö",count); 
}
