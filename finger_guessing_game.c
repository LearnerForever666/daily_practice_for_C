//��ȭ��Ϸ��ʵ��
#include<stdlib.h>
#include<time.h>
#include<string.h>
void transprint(char* who,int qnum)
{
	char quan[7];
	switch(qnum)
	{
		case 0:
			strcpy(quan,"����");
			break;
		case 1:
			strcpy(quan,"ʯͷ");
			break;
		case 2:
			strcpy(quan,"��");
			break;
	};
	printf("%s : %s",who,quan);
}
void menu()
{
	printf("%-5s  %-5s\n","0:����","1:ʯͷ");
	printf("%-5s\n","2:��");
}
int main()
{
	int cup_quan=0;
	int pla_quan=0;
	menu();
	printf("��ѡ��:>");
	scanf("%d",&pla_quan);
	srand(time(NULL));
	cup_quan=rand()%3;
	if(pla_quan-cup_quan==1||pla_quan-cup_quan==-2)
	{
		printf("���ʤ��!!!\n");
	}
	else if(cup_quan-pla_quan==1||cup_quan-pla_quan==-2)
	{
		printf("����ʤ��!!!\n");
	}
	else
	{
		printf("ƽ��\n");
	};
	transprint("���",pla_quan);
	printf("  ");
	transprint("����",cup_quan);
	printf("\n");
	return 0;
}