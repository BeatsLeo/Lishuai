#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
		while(1){
	cout<<"***��ӭ���� ʯͷ������ ��Ϸ***"<<endl<<"***����1��ʼ��Ϸ������0�˳���Ϸ***"<<endl;
	int flag;
	cin>>flag;
	if(flag==0){
		break;
	}
	if(flag==1){
	cout<<"***�����ȿ�ʼ***"<<endl<<"*0Ϊʯͷ\n*1Ϊ����\n*2Ϊ��\n";
	int n=3;
	while(!(n==0||n==1||n==2)){
		cout<<"���ѡ���ǣ�"<<endl;
	cin>>n;
	}
	srand((unsigned)time(NULL));
	int m=rand()%3;
	int del=n-m;
	switch(n){
		case 0:cout<<"*�������ǣ�ʯͷ\n";
		break;
				case 1:cout<<"*�������ǣ�����\n";
		break;
				case 2:cout<<"*�������ǣ���\n";
		break;
	}
	if(n==0){
		if(m==0){
		 cout<<"*���Գ����ǣ�ʯͷ\n"<<"*ƽ��\n\n\n";
		}
		if(m==1){
			cout<<"*���Գ����ǣ�����\n"<<"*��Ӯ��\n\n\n";
		}
		if(m==2){
			cout<<"*���Գ����ǣ���\n"<<"*������\n\n\n"; 
		} 
	}
		if(n==1){
		if(m==0){
		 cout<<"*���Գ����ǣ�ʯͷ\n"<<"*������\n\n\n";
		}
		if(m==1){
			cout<<"*���Գ����ǣ�����\n"<<"*ƽ��\n\n\n";
		}
		if(m==2){
			cout<<"*���Գ����ǣ���\n"<<"*��Ӯ��\n\n\n"; 
		} 
	}
		if(n==2){
		if(m==0){
		 cout<<"*���Գ����ǣ�ʯͷ\n"<<"*��Ӯ��\n\n\n";
		}
		if(m==1){
			cout<<"*���Գ����ǣ�����\n"<<"*������\n\n\n";
		}
		if(m==2){
			cout<<"*���Գ����ǣ���\n"<<"*ƽ��\n\n\n"; 
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
