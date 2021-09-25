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