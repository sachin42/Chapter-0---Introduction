#include <stdio.h>
int main() 
{
	int x;
	float y;
	printf("Input total distance in km: ");
	scanf("%d",&x);
	printf("Input total fuel spent in liters: ");
	scanf("%f", &y);
	printf("Average consumption (km/lt) %.3f ",x/y);
	printf("\n");
	return 0;
}
