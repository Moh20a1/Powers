#include <stdio.h>
#include <math.h>

int main()
{
	float value,result;
	int power;
	
	printf("enter a number and then a power: (hint, press space to seprate them) ");
	scanf("%f %d", &value,&power);
	result = pow(value,power);
	printf("%.2f to the power of %d = %.2f", value,power,result);
	return(0);
}