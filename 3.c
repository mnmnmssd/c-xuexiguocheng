#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>

int main(void)
{
	
	int x = 0;
	int i;
	int c;
	int c_1;
	int n;
	
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	
	printf("----------------------------------\n");
	printf("\t猜\t数\t字\n");
	printf("----------------------------------\n");

	do{
		printf("生成数字中。。。。\n");
		
		sleep(8);
		
		system("cls");
		srand((unsigned)time(NULL));
		
		c = rand()%100+1;
		
		
		while(1)
		{
			
			SetConsoleTextAttribute(handle,FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
			printf("\n输入你猜到的数字：\n");
			SetConsoleTextAttribute(handle,FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED);
			scanf("%d",&c_1);
			
			if(c_1 < c)
			{
				SetConsoleTextAttribute(handle,FOREGROUND_INTENSITY|FOREGROUND_GREEN);
				printf("比这个数字大哟！！\n");
				n++;
			}
			else if(c_1 > c)
			{
				SetConsoleTextAttribute(handle,FOREGROUND_INTENSITY|FOREGROUND_RED);
				printf("比这个数字小哟！！\n");
				n++;
			}
			else
			{
				SetConsoleTextAttribute(handle,FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN);
				printf("恭喜你，猜对了，没错，是%d\n",c);
				break;
			}
			if(n >= 5)
			{
				SetConsoleTextAttribute(handle,FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN|BACKGROUND_RED);
				printf("很遗憾，你没有机会了\n");
				sleep(2);
				system("cls");
				printf("\n\t胜败乃兵家常事，大侠请重新来过!\t\n\n\n");
				break;
			}
		} 
		printf("\t是否继续呢(将重新生成随机数)：\n");
		printf("\t1.继续\t2.退出\n");
		scanf("%d",&i);
	}while(i==1);

	return 0;
}
