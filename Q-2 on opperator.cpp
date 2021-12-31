#include<stdio.h>
int main()
{
	int a=50,b=10,c=20;
	c+=(0)? ++a: a/b;
	printf("%d",c);
	return 0;
}
