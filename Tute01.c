#include<stdio.h>

int main()
{
	int x;
	int y;
	float Total;
	float Avg; 
	
	printf("Enter subject 1 mark :");
	scanf("%d",&x);
	printf("Enter subject 2 mark :");
	scanf("%d",&y);
	
	Total = x + y;
	Avg = Total/2.0;
	printf("Average is %.2f ",Avg);
	
	
	return 0;
}
