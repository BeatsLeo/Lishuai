#include <iostream>
using namespace std;
int main(){
    double a,n,h,m,BMI;
    cout<<"��ӭ����������������ϵͳ���밴�س���ʼ��ȷ��"<<endl;
    cout<<"�����������Ѷ��ư棬������ֵ�ǵð��س��������"<<endl;
    scanf("d%",&n);
    cout<<"�����������ߣ���λm��:";
    cin>>h;
    cout<<"������������أ���λkg����";
	cin>>m;
	BMI=m/h/h;
	cout<<"���BMI����������ָ����="<<BMI<<endl; 
	if (BMI < 17.8)
	{
	cout<<"���������Ե㡣"<<endl;
	}
	else if(BMI<24)
	{
		cout<<"��Ļ��У�С����������֣��������"<<endl;
	}
	else if(BMI<28)
	{
		cout<<"�������ע��㣬�ü����ˣ�"<<endl;
	}
	else
	{
		cout<<"������û���ˡ�"<<endl;
	}
	scanf("%d",a);
	printf("%d",a);
    return 0;
}
