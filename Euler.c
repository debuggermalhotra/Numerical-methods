#include<stdio.h>

float f(float x,float y)
{
	return(x+y);
}

int main()
{
	int i,n;
	float x0,xn,yn,y0,y1,h;
	
	printf("Enter x0: ");
	scanf("%f",&x0);
	printf("\nEnter y0: ");
	scanf("%f",&y0);
	printf("\nEnter xn: ");
	scanf("%f",&xn);
	printf("\nEnter n:");
	scanf("%d",&n);
	
	h=xn-(x0/n);
	for(i=0;i<n;i++)
	{
		y1=y0+(h*f(x0,y0));
		x0=x0+h;
		y0=y1;
	}
		printf("\nThe value of y1: %f",y1);
	
		return 0;
	
}
	
		
