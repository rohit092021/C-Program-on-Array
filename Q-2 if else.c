#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
	printf("a is greator");
	}
	if(b>c) 
	{
		printf("b is greator");
	}
	if(a==b==c)
	{
	printf("all are equal");
	}
	else
	{
	printf("c is greator");
	}
	return 0;
}
