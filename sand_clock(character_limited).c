/*7-1 ��ӡɳ© (20 ��)
����Ҫ����д������Ѹ����ķ��Ŵ�ӡ��ɳ©����״���������17����*����Ҫ�����и�ʽ��ӡ

*****
 ***
  *
 ***
*****
��ν��ɳ©��״������ָÿ��������������ţ����з������Ķ��룻�������з�������2���������ȴӴ�С˳��ݼ���1���ٴ�С����˳���������β��������ȡ�

��������N�����ţ���һ�����������һ��ɳ©��Ҫ���ӡ����ɳ©���õ������ܶ�ķ��š�

�����ʽ:
������һ�и���1��������N����1000����һ�����ţ��м��Կո�ָ���

�����ʽ:
���ȴ�ӡ���ɸ���������ɵ�����ɳ©��״�������һ�������ʣ��û�õ��ķ�������

��������:
19 *
��β�޿���
�������:
*****
 ***
  *
 ***
*****
2
��β�޿���
*/
/*
author: LearnForever
Date:2021 September 25th
*/
#include<stdio.h>
int chnum=0;
int floor=0;
char character;
int max=0;
int final_print=0;
void shalouprint(int num)
{
	int i=0;
	int func_floor=floor;
	if(num<(2*func_floor+1)*2)
	{
		final_print=num;
	}
	else if(func_floor==0)
	{
		floor++;
		max+=1;
		shalouprint(num-1);
		for(i=0;i<(max-1)/2;i++)
			printf(" ");
		printf("%c",character);
		for(i=0;i<(max-1)/2;i++)
			printf(" ");
		printf("\n");
	}
	else
	{
		floor++;
		max+=2;
		shalouprint(num-(2*func_floor+1));
		for(i=0;i<(max-(2*func_floor+1))/2;i++)
			printf(" ");
		for(i=0;i<2*func_floor+1;i++)
			printf("%c",character);
		for(i=0;i<(max-(2*func_floor+1))/2;i++)
			printf(" ");
		printf("\n");
	}
}
int main()
{
	int start=0;
	int i=0,j=0;
	printf("���������� ����:>");
	scanf("%d %c",&chnum,&character);
	shalouprint(chnum);
	for(i=0;i<floor-1;i++)
	{
		for(j=0;j<(max-(2*(i+1)+1))/2;j++)
			printf(" ");
		for(j=0;j<2*(i+1)+1;j++)
			printf("%c",character);
		for(j=0;j<(max-(2*(i+1)+1))/2;j++)
			printf(" ");
		printf("\n");
	};
	printf("%d\n",final_print);
	return 0;
}