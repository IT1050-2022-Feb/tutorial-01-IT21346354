#include<stdio.h>
int main()
{
	int X;//distance
	float Amount;
	printf("Input the distance the vehicle has travelled :");
	scanf("%d",&X);
	
	if(X>=30)
	{
		Amount = (30 * 50) + (X-30) * 40;
	}
	else
	{
		Amount = X * 50;
	}
	
	printf("Paid for a rented vehicle :%.2f",Amount);
	
	return 0;
}
