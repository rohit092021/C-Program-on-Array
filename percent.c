#include<stdio.h>
int main()
{
	int a=1,b=1;
	int c=a||--b;
	int d=a--&&--b;
	printf("%d%d%d%d",a,b,c,d);
	
	return 0;
}
