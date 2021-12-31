#include<stdio.h>
int main()
{
	int x;
		scanf("%d",&x);
		if(x>='a'&&x<='z'||x>='A'&&x<='Z')
		printf("alphabet");
	    if(x>=0&&x<=9)
		printf("digit");
		else
		printf("special charactor");
		return 0;
}

