//输入一个数字，通过Number_reverse()函数之后可以将这个数字的顺序调换
/*
author:LearnerForever
Date:2021 Sep 27th
*/
#include<stdio.h>
#include<math.h>
int Number_reverse(int num)
{
	int arr[12]={0};
	int i=0;
	int j=0;
	if(num>pow(2,(float)31-1)||num<pow(-2,(float)31))
	{
		return 0;
	}
	else
	{
		i=0;
		while(num!=0)
		{
			arr[i]=num%10;
			num/=10;
			i++;
		};
		num=0;
		for(j=0;j<i;j++)
		{
			num+=arr[i-j-1]*pow(10,(float)j);
		};
		return num;
	}
	
	
}
int main()
{
	int num=0;
	printf("请输入待调换顺序的数字:>");
	scanf("%d",&num);
	num=Number_reverse(num);
	printf("%d\n",num);
	return 0;
}
