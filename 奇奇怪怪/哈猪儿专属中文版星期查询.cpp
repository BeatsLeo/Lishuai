/* Prints a date in legal form */
#include <stdio.h>
int main(void)
{
  int month, day, year;
  printf("热烈欢迎哈猪儿来到星期查询系统！\n");
  printf("快输入你想要查询的日期(只能查2000年~2099年的):\n ");
  printf("年份：20"); 
  scanf("%d", &year);
  printf(" 月份：");
  scanf("%d",&month);
  printf(" 日：");
  scanf("%d",&day); 
  if((1<=day&&day<=31)&&(1<=month&&month<=12)&&(0<=year&&year<=99))
  {
  		printf("您输入的日期为20%.2d年", year);
        printf("%d月",month);
        printf("%d日",day);
  int a,b,c,d,e;
  d=(month-7)/2;
  c=(month-2)/2;
  b=(year+3)/4;
  if(year%4==0)//闰年 
  {
  if(month<=2){
  a=year*365+b+(month/2)*31+day-1;
  }
  else if(2<month&&month<=7){
  	a=year*365+b+60+(month-3)*30+c+day-1;
  }
  else{
  	a=year*365+b+213+(month-8)*30+d+day-1;
  }
}
  else{
  	if(month<=2){
  a=year*365+b+(month/2)*31+day-1;
  }
  else if(2<month&&month<=7){
  	a=year*365+b+59+(month-3)*30+c+day-1;
  }
  else{
  	a=year*365+b+212+(month-8)*30+d+day-1;
  }
  }
  e=a%7;
  printf("\n这一天是... ");
  switch(e){
  case 0:printf("星期六！");break;
  case 1:printf("星期天！");break;
  case 2:printf("星期一！");break;
  case 3:printf("星期二！");  break;
  case 4:printf("星期三！");break;
  case 5:printf("星期四！");break;
  case 6:printf("星期五！");   break;
  } 
}
    else{
    printf("哈的迈？输入正确的日期！");
  }
  int x;
  scanf("%d",&x);
  printf("%d",x);
  return 0;
}


