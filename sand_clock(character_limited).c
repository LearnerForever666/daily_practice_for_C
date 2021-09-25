/*7-1 打印沙漏 (20 分)
本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印

*****
 ***
  *
 ***
*****
所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。

给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。

输入格式:
输入在一行给出1个正整数N（≤1000）和一个符号，中间以空格分隔。

输出格式:
首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。

输入样例:
19 *
结尾无空行
输出样例:
*****
 ***
  *
 ***
*****
2
结尾无空行
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
	printf("请输入数量 符号:>");
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