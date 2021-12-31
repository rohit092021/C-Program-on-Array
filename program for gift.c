#include<stdio.h>
int main()
{
	int gift;
	printf("enter the subject you passed\n");
	printf("enter 1 for math\n");
	printf("enter 2 for science\n");
	printf("enter 3 for math and science\n");
	scanf("%d",&gift);
	if (gift=1)
	{
		printf("gift is of 15rs. on passing math");
	}
	else if(gift=2)
	{
		printf("gift is of 10rs. on passing science");
	}
	else if(gift=3)
	{
	printf("gift is of 45rs. on passing math and science");
    }
    else
    {
    	printf("you haven`t pass any exam");
	}
  	return 0;
} 
