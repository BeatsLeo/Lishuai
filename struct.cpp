#include<iostream>
struct com{
	private:
	int a,b;
	public:
		int getA(){
			return a;
		}
};

int main(){
	com c;
	int a[]={2,1};
	
	std::cout<<c.getA();
	return 0;
}
