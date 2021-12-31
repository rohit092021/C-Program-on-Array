#include<stdio.h>
int main()
{
	int a;
	printf("enter any number\n");
	scanf("%d",&a);
	if(a<0)
	{
	printf("negative\n");
	}
	if(a>0) 
	{
	printf("+ive\n");
	}
	else
	{
	printf("number is zero");
	}
	return 0;
}
