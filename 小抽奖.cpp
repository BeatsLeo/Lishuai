#include <stdio.h>
#include<stdlib.h> 
#include<time.h>
int main ()
{
	int flag,n,m;
	while(1){
		printf("又见面了哈猪儿！！！\n这是一个试手气的抽奖环节！\n");
		printf("输入1开始进行抽奖，输入0退出：\n");
		scanf("%d",&flag);
		if(flag==0){
	break;		
		}
		if(flag!=0&&flag!=1){
			printf("喊你输啥你就输！\n\n");
		}
		if(flag==1){
			srand((unsigned)time(NULL));
			m=rand()%11;
			printf("你的号码是：%d\n",m);
			if(m==4){
				printf("恭喜你，中奖啦！！！（哈猪儿运气还好嘛）\n\n");
			}
			else{
				printf("很遗憾，没中奖，运气这么差，还不如回去养猪！\n\n");
			}
		}
		
	}
   return 0;
}
