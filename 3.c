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
	printf("\t��\t��\t��\n");
	printf("----------------------------------\n");

	do{
		printf("���������С�������\n");
		
		sleep(8);
		
		system("cls");
		srand((unsigned)time(NULL));
		
		c = rand()%100+1;
		
		
		while(1)
		{
			
			SetConsoleTextAttribute(handle,FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
			printf("\n������µ������֣�\n");
			SetConsoleTextAttribute(handle,FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED);
			scanf("%d",&c_1);
			
			if(c_1 < c)
			{
				SetConsoleTextAttribute(handle,FOREGROUND_INTENSITY|FOREGROUND_GREEN);
				printf("��������ִ�Ӵ����\n");
				n++;
			}
			else if(c_1 > c)
			{
				SetConsoleTextAttribute(handle,FOREGROUND_INTENSITY|FOREGROUND_RED);
				printf("���������СӴ����\n");
				n++;
			}
			else
			{
				SetConsoleTextAttribute(handle,FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN);
				printf("��ϲ�㣬�¶��ˣ�û����%d\n",c);
				break;
			}
			if(n >= 5)
			{
				SetConsoleTextAttribute(handle,FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN|BACKGROUND_RED);
				printf("���ź�����û�л�����\n");
				sleep(2);
				system("cls");
				printf("\n\tʤ���˱��ҳ��£���������������!\t\n\n\n");
				break;
			}
		} 
		printf("\t�Ƿ������(���������������)��\n");
		printf("\t1.����\t2.�˳�\n");
		scanf("%d",&i);
	}while(i==1);

	return 0;
}
