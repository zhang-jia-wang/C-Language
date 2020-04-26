#include<iostream>
using namespace std;
int prim(int x){
	int i;
	if(x<3) 
	return 1;
	else {
		for(i=2;i<x;i++){
			if(x%i==0)  
			return 0;	
		}		
	}
		return 1;
}
int main(){
	int j;
	int count=0;
	for(j=2;j<100;j++){
		if(prim(j)){
		count++;
		cout<<j<<endl;
	}
	}
	printf("100以内一共%d个素数",count);
	
} 
