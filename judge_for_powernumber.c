#include<stdio.h>
int main()
{
	int testnum=0;
	int timesnum=0;
	int count=0;
	int rem=0;
	printf("����������Ե�����:>");
	scanf("%d",&testnum);
	rem=testnum;
	printf("����������η���:>");
	scanf("%d",&timesnum);
	while(testnum&&!(testnum%timesnum))
	{
		testnum/=timesnum;
		count++;
	};
	if(testnum==1)
	{
		printf("%d �� %d �� %d �η�\n",rem,timesnum,count);
	}
	else
	{
		printf("%d ���� %d �Ĵη���\n",rem,timesnum);
	}
	return 0;
}