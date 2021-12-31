#include<stdio.h>
int main()
{
	int x=4,y;
	y = x++ + x++ + x++;
	printf("%d",y);
	return 0;
}
