#include <stdio.h>
#include<stdlib.h> 
#include<time.h>
int main ()
{
	int flag,n,m;
	while(1){
		printf("�ּ����˹����������\n����һ���������ĳ齱���ڣ�\n");
		printf("����1��ʼ���г齱������0�˳���\n");
		scanf("%d",&flag);
		if(flag==0){
	break;		
		}
		if(flag!=0&&flag!=1){
			printf("������ɶ����䣡\n\n");
		}
		if(flag==1){
			srand((unsigned)time(NULL));
			m=rand()%11;
			printf("��ĺ����ǣ�%d\n",m);
			if(m==4){
				printf("��ϲ�㣬�н�������������������������\n\n");
			}
			else{
				printf("���ź���û�н���������ô��������ȥ����\n\n");
			}
		}
		
	}
   return 0;
}
