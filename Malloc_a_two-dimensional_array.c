//动态开辟一个二维数组 
//This function is used to malloc a piece of room in memry to the two-dimensional arry while add some imformation you want.
/*
author:LearnerForever
Date:2021 Sep 28th
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
int time=0;
void charadd(char (**arr)[][MAX],char* padd)
{
	if(time==0)
	{
		*arr=(char(*)[][MAX])malloc(MAX);
		time++;
		strcpy((char*)**arr,padd);
	}
	else
	{
		*arr=(char(*)[][MAX])realloc(*arr,MAX*(time+1));
		strcpy(((char*)(**arr))+time*MAX,padd);
		time++;
	};
}
int main()
{
	char (*arr)[][MAX]=NULL;
	int i=0;
	int n=0;
	charadd(&arr,"test");
	charadd(&arr,"TEST");
	charadd(&arr,"I win");
	charadd(&arr,"The game");
	charadd(&arr,"!!!");
	for(i=0;i<time;i++)
	{
		printf("%s\n",((char*)*arr)+i*MAX);
	}
return 0;
}
