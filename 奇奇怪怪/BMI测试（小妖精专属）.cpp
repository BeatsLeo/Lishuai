#include <iostream>
using namespace std;
int main(){
    double a,n,h,m,BMI;
    cout<<"欢迎来到身体质量测试系统，请按回车开始及确认"<<endl;
    cout<<"（贴心男朋友定制版，输完数值记得按回车哈猪儿）"<<endl;
    scanf("d%",&n);
    cout<<"请输入你的身高（单位m）:";
    cin>>h;
    cout<<"请输入你的体重（单位kg）：";
	cin>>m;
	BMI=m/h/h;
	cout<<"你的BMI（身体质量指数）="<<BMI<<endl; 
	if (BMI < 17.8)
	{
	cout<<"你个瘦猪，多吃点。"<<endl;
	}
	else if(BMI<24)
	{
		cout<<"身材还行，小猪猪继续保持，多锻炼。"<<endl;
	}
	else if(BMI<28)
	{
		cout<<"你个胖猪，注意点，该减肥了！"<<endl;
	}
	else
	{
		cout<<"肥猪，你没救了。"<<endl;
	}
	scanf("%d",a);
	printf("%d",a);
    return 0;
}
