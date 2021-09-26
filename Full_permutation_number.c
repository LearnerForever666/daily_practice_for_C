/*
该方法可以用于全排列数的生成，并且可以结合数组使得数组内元素的全排列
*/
/*
author:LearnerForever
Date:2021 Sep 26th
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* tag=NULL;
int* storage;
int rem=0;
int count=0;
void Full_permutation(int number_of_permutation)
{
	int i=0;
	if(number_of_permutation==0)
	{
		for(i=0;i<rem;i++)
		{
			printf("%d ",storage[i]);
		};
		printf("\n");
	}
	else
	{
		for(i=1;i<=rem;i++)
		{
			if(tag[i]==0)
			{
				storage[count]=i;
				tag[i]=1;
				count++;
				Full_permutation(number_of_permutation-1);
				count--;
				tag[i]=0;
			}
		}
	}
}
int main()
{
	int number_of_permutation=0;
	int* tmp=NULL;
	printf("请输入需要的全排列数的个数:>");
	scanf("%d",&number_of_permutation);
	rem=number_of_permutation;
	tmp=(int*)malloc(number_of_permutation*sizeof(int));
	if(tmp==NULL)
	{
		printf("%s\n",strerror(errno));
		return 0;
	};
	storage=tmp;
	tmp=(int*)malloc((1+number_of_permutation)*sizeof(int));
	if(tmp==NULL)
	{
		printf("%s\n",strerror(errno));
		return 0;
	};
	tag=tmp;
	memset(tag,0,(1+number_of_permutation)*sizeof(int));
	tmp=NULL;
	Full_permutation(number_of_permutation);
	return 0;
}
