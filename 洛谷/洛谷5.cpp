#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,k;
    char l,j;
    scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%1c",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    k=a+2*b+3*c+4*d+5*e+6*f+7*g+8*h+9*i;
    l=k%11;
    if(l==10){
    	l='X';
	}
    if(l==j){
        printf("Right");
        return 0;
    }
    if(l=='X'){
        printf("%c-%c%c%c-%c%c%c%c%c-%c",a+48,b+48,c+48,d+48,e+48,f+48,g+48,h+48,i+48,l);
}
    else{
    	printf("%c-%c%c%c-%c%c%c%c%c-%c",a+48,b+48,c+48,d+48,e+48,f+48,g+48,h+48,i+48,l+48);
	}
    return 0;
}
