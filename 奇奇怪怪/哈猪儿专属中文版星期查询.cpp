/* Prints a date in legal form */
#include <stdio.h>
int main(void)
{
  int month, day, year;
  printf("���һ�ӭ������������ڲ�ѯϵͳ��\n");
  printf("����������Ҫ��ѯ������(ֻ�ܲ�2000��~2099���):\n ");
  printf("��ݣ�20"); 
  scanf("%d", &year);
  printf(" �·ݣ�");
  scanf("%d",&month);
  printf(" �գ�");
  scanf("%d",&day); 
  if((1<=day&&day<=31)&&(1<=month&&month<=12)&&(0<=year&&year<=99))
  {
  		printf("�����������Ϊ20%.2d��", year);
        printf("%d��",month);
        printf("%d��",day);
  int a,b,c,d,e;
  d=(month-7)/2;
  c=(month-2)/2;
  b=(year+3)/4;
  if(year%4==0)//���� 
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
  printf("\n��һ����... ");
  switch(e){
  case 0:printf("��������");break;
  case 1:printf("�����죡");break;
  case 2:printf("����һ��");break;
  case 3:printf("���ڶ���");  break;
  case 4:printf("��������");break;
  case 5:printf("�����ģ�");break;
  case 6:printf("�����壡");   break;
  } 
}
    else{
    printf("��������������ȷ�����ڣ�");
  }
  int x;
  scanf("%d",&x);
  printf("%d",x);
  return 0;
}


