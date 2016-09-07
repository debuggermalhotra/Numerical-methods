#include<stdio.h>
#include<math.h>

float f(float x)
{
	return x*x*x-4*x-9;   //equation I am considering
}

int main()
{
	float a,b,c,error,temp;
	
	printf("Enter the value of error: ");
	scanf("%f",&error);
	do
	{
		printf("\n\nEnter the values of a and b: ");
		scanf("%f %f",&a,&b);
	}
	while(f(a)*f(b)>0);
	c=0.0;
	do
	{
		temp=c;
		c=a-(f(a)*(b-a)/(f(b)-f(a)));
		if(f(a)*f(c)<0)
		{
			b=c;
		}
		else
		{
			a=c;
		}
	}
	while(fabs(temp-c)>error);
	printf("\nThe root of equation is: %f",c);
	
	return 0;

}
