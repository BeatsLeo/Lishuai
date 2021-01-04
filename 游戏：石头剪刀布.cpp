#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
		while(1){
	cout<<"***欢迎来到 石头剪刀布 游戏***"<<endl<<"***输入1开始游戏，输入0退出游戏***"<<endl;
	int flag;
	cin>>flag;
	if(flag==0){
		break;
	}
	if(flag==1){
	cout<<"***由你先开始***"<<endl<<"*0为石头\n*1为剪刀\n*2为布\n";
	int n=3;
	while(!(n==0||n==1||n==2)){
		cout<<"你的选择是："<<endl;
	cin>>n;
	}
	srand((unsigned)time(NULL));
	int m=rand()%3;
	int del=n-m;
	switch(n){
		case 0:cout<<"*您出的是：石头\n";
		break;
				case 1:cout<<"*您出的是：剪刀\n";
		break;
				case 2:cout<<"*您出的是：布\n";
		break;
	}
	if(n==0){
		if(m==0){
		 cout<<"*电脑出的是：石头\n"<<"*平局\n\n\n";
		}
		if(m==1){
			cout<<"*电脑出的是：剪刀\n"<<"*你赢了\n\n\n";
		}
		if(m==2){
			cout<<"*电脑出的是：布\n"<<"*你输了\n\n\n"; 
		} 
	}
		if(n==1){
		if(m==0){
		 cout<<"*电脑出的是：石头\n"<<"*你输了\n\n\n";
		}
		if(m==1){
			cout<<"*电脑出的是：剪刀\n"<<"*平局\n\n\n";
		}
		if(m==2){
			cout<<"*电脑出的是：布\n"<<"*你赢了\n\n\n"; 
		} 
	}
		if(n==2){
		if(m==0){
		 cout<<"*电脑出的是：石头\n"<<"*你赢了\n\n\n";
		}
		if(m==1){
			cout<<"*电脑出的是：剪刀\n"<<"*你输了\n\n\n";
		}
		if(m==2){
			cout<<"*电脑出的是：布\n"<<"*平局\n\n\n"; 
		} 
	}
}
 if(flag!=0||flag!=1){
	continue;
}
system("pause");
}
	return 0; 
} 
