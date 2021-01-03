#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int m,t,s;
    scanf("%d %d %d",&m,&t,&s);
    if(t==0){
        printf("%d",0);
    }
    else {
        int x;
		x=max(0,m-(s+t-1)/t);
        printf("%d",x);
    }
    return 0;
}
