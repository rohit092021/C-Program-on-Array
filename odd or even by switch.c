#include<stdio.h>
int main()
{
	int x;
	printf("enter any number");
	scanf("%d",&x);
	switch(x%2)
	{
		case 0:
			printf("even");
		
		case 1:
			printf("odd");
	}
	return 0;
}
