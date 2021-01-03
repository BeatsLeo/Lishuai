#include<iostream>
using namespace std;
int main(){
	char x,y,z;
	int a,b,c;
	cin>>x>>y>>z; 
	a=x,b=y,c=z;
	char A,B,C;
	if(a>b){
		if(b>c){
			A=a,B=b,C=c;
		}
		else if(b<=c){
			if(a>c){
				A=a,B=c,C=b;
				}
				else if(a<=c)
				{
					A=c,B=a,C=b;
				}
			
		}
	} 
	else{
		if(a>c){
			A=b,B=a,C=c; 
		}
		else if(a<=c){
			if(b>c){
				A=b,B=c,C=a;
			}
			else if(b<=c){
				A=c,B=b,C=a;
			}
		}
	}
	cout<<A<<">"<<B<<">"<<C;
	int f;
	cin>>f;
	cout<<f;
	return 0 ;
} 
