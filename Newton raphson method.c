#include<stdio.h>
#include<math.h>

float f(float x)
{
	return cos(x)-(x*exp(x));
}

float fd(float x)
{
	return -sin(x)-x*exp(x)-(exp(x));
}

int main()
{
	float error,temp,x0,x1,h;
	
	printf("Enter the error value: ");
	scanf("%f",&error);
	printf("\nEnter the value of x0: ");
	scanf("%f",&x0);
	do
	{
		temp=x1;
		h=f(x0)/fd(x0);
		x1=x0-h;
		x0=x1;
	}
	while(fabs(temp-x1)>error);
	printf("\nThe root is: %f",x1);
	return 0;
}
