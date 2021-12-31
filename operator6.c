#include<stdio.h>
int main()
{
	int b,k=8;
	b=(k++-k++-k--,k++); 
	
	printf("%d",b );
}
