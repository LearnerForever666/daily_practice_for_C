/*这是一个有关数组内容右旋的题目，要求在第一行输入数组元素个数以及右旋个数，空格隔开，换行后输入数组内容，回车结束，之后能够打印出右旋之后的内容*/
/*
author:LearnerForever
Date:2021 Sep 25th
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void dextro(int* dex,int num,int dexnum)
{
	int tmp=0;
	int i=0;
	if(dexnum--)
	{
	tmp=dex[0];
	for(i=0;i<num-1;i++)
	{
		dex[i]=dex[i+1];
	};
	dex[num-1]=tmp;
	dextro(dex,num,dexnum);
	};
};
int main()
{
	int* dex=NULL;
	int* tmp;
	int num=0,dexnum=0;
	int i=0;
	printf("请输入数组元素个数 右旋位数:>");
	scanf("%d %d",&num,&dexnum);
	tmp=(int*)malloc(sizeof(int)*num);
	if(tmp==NULL)
	{
		printf("%s\n",strerror(errno));
		return 0;
	};
	dex=tmp;
	tmp=NULL;
	printf("请输入数组内容，用空格隔开:>");
	for(i=0;i<num;i++)
	{
		scanf("%d",&dex[i]);
	};
	dextro(dex,num,dexnum);
	for(i=0;i<num;i++)
	{
		printf("%d ",dex[i]);
	}
	printf("\n");
}
