#include<stdio.h>


float f(float x)
{
	return(1/(1+x));
}

int main()
{
	int i,n;
float a,b,h,I,sum;
printf("Enter the lower limit: ");
scanf("%f",&a);
printf("\nEnter the upper limit: ");
scanf("%f",&b);
printf("\nEnter the number of sub-intervals: ");
scanf("%d",&n);
h=(b-a)/n;
sum=f(a)+f(b);
for(i=1;i<n-1;i++)
{
	sum+=(2*f(a+i*h));
}
 	I=(h/2)*sum;
 	printf("\n\nThe value of I is: %f",I);
 	return 0;
}
