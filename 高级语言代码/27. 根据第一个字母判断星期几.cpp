#include<iostream>
using namespace std;
int main(){
	char c;
	while((c=getchar())!='Y'){
		switch(c){
			case 'S':
				if((c=getchar())=='a') cout<<"saturday"<<endl;
				else if((c=getchar())=='u') cout<<"sunday"<<endl;
				break;
			case 'T':
				if((c=getchar())=='u')	cout<<"Tuesday"<<endl; 
				else if((c=getchar())=='h')   cout<<"Thusday"<<endl;
				break;
			case 'F':
				cout<<"Friday"<<endl;
				break;
			case 'M':
				cout<<"Monday"<<endl;
				break;
			case 'W':
				cout<<"Wednesday"<<endl;
					break;
		
		 
		}
	}
} 
