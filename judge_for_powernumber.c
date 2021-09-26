/*
这是一个判断一个数是否为某一个数的次方数的方法
*/
/*
author:LearnerForever
Date:2021 Sep 26th
*/
#include<stdio.h>
int main()
{
	int testnum=0;
	int timesnum=0;
	int count=0;
	int rem=0;
	printf("请输入待测试的数字:>");
	scanf("%d",&testnum);
	rem=testnum;
	printf("请输入基本次方数:>");
	scanf("%d",&timesnum);
	while(testnum&&!(testnum%timesnum))
	{
		testnum/=timesnum;
		count++;
	};
	if(testnum==1)
	{
		printf("%d 是 %d 的 %d 次方\n",rem,timesnum,count);
	}
	else
	{
		printf("%d 不是 %d 的次方数\n",rem,timesnum);
	}
	return 0;
}
