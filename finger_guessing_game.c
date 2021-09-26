//猜拳游戏的实现
#include<stdlib.h>
#include<time.h>
#include<string.h>
void transprint(char* who,int qnum)
{
	char quan[7];
	switch(qnum)
	{
		case 0:
			strcpy(quan,"剪刀");
			break;
		case 1:
			strcpy(quan,"石头");
			break;
		case 2:
			strcpy(quan,"布");
			break;
	};
	printf("%s : %s",who,quan);
}
void menu()
{
	printf("%-5s  %-5s\n","0:剪刀","1:石头");
	printf("%-5s\n","2:布");
}
int main()
{
	int cup_quan=0;
	int pla_quan=0;
	menu();
	printf("请选择:>");
	scanf("%d",&pla_quan);
	srand(time(NULL));
	cup_quan=rand()%3;
	if(pla_quan-cup_quan==1||pla_quan-cup_quan==-2)
	{
		printf("玩家胜利!!!\n");
	}
	else if(cup_quan-pla_quan==1||cup_quan-pla_quan==-2)
	{
		printf("电脑胜利!!!\n");
	}
	else
	{
		printf("平局\n");
	};
	transprint("玩家",pla_quan);
	printf("  ");
	transprint("电脑",cup_quan);
	printf("\n");
	return 0;
}