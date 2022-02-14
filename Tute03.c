#include<stdio.h>
int main()
{
	int x;
	int n=1;
	int tot=0;
	
	printf("Enter number :");
	scanf("%d",&x);
	
	while(n<=x)
	{
		
		tot=tot+n;
		n=n+1;
		
	}
	printf("Sum is :%d",tot);
	
	return 0;
}

