#include<stdio.h>
int main()
{
	int x;
	printf("enter the number of month");
	scanf("%d",&x);
	if(x==1&&3&&5&&7&&8&&10&&12)
	{
		printf("31 days in this month");
	}
	if(x==4&&6&&9&&11)
	{
		printf("30 days");	
	}
	if(x==2)
	printf("28 or 29");
	return 0;
}
