#include<stdio.h>
int main()
{
	int a=2,b=10,k,c;
	k=!((a<2)&&(b>2));
	printf("%d",k);
	c=(b<a||b>a);
	printf("%d",c);
	return 0;
}
