#include<iostream>
using namespace std;
int swap(int*x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
    return 10;
}
int main(){
	int i=42,j=0;
	cout<<i<<" "<<j<<endl;
	swap(i,j);
	return 0;
}

