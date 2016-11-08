#include<stdio.h>

#include<math.h>
int main()
{
  float x[10],y[10][10],sum,p,u,temp;
  int i,n,j,k=0,f,m;
  float fact(int);

  printf("\nEnter the  number of records: ");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
   printf("\n\nEnter the value of x%d: ",i);
   scanf("%f",&x[i]);
   printf("\n\nEnter the value of f(x%d): ",i);
   scanf("%f",&y[k][i]);
  }

  printf("\n\nEnter X for finding f(x): ");
  scanf("%f",&p);

  for(i=1;i<n;i++)
  {
    for(j=0;j<n-i;j++)
    {
     y[i][j]=y[i-1][j+1]-y[i-1][j];
    }
  }
  printf("\n_____________________________________________________\n");
  printf("\n  x(i)\t   y(i)\t    y1(i)    y2(i)    y3(i)    y4(i)");
  printf("\n_____________________________________________________\n");
  for(i=0;i<n;i++)
  {
    printf("\n %.3f",x[i]);
    for(j=0;j<n-i;j++)
    {
     printf("   ");
     printf(" %.3f",y[j][i]);
    }
   printf("\n");
  }

  i=0;
  do
  {
   if(x[i]<p && p<x[i+1])
    k=1;
   else
    i++;
  }while(k != 1);
  f=i;
  u=(p-x[f])/(x[f+1]-x[f]);
  printf("\n\n u = %.3f ",u);

  n=n-i+1;
  sum=0;
  for(i=0;i<n-1;i++)
  {
   temp=1;
   for(j=0;j<i;j++)
   {
    temp = temp * (u - j);
   }
    m=fact(i);
    sum = sum + temp*(y[i][f]/m);
  }
  printf("\n\n f(%.2f) = %f ",p,sum);
 return 0;
}

float fact(int a)
{
  float fac = 1;

  if (a == 0)
   return (1);
  else
   fac = a * fact(a-1);

  return(fac);
}

/*
______________________________________

         OUT PUT
______________________________________


how many record you will be enter: 5


enter the value of x0: 2


enter the value of f(x0): 9


enter the value of x1: 2.25


enter the value of f(x1): 10.06


enter the value of x2: 2.5


enter the value of f(x2): 11.25


enter the value of x3: 2.75


enter the value of f(x3): 12.56


enter the value of x4: 3


enter the value of f(x4): 14


Enter X for finding f(x): 2.35

_____________________________________________________

  x(i)     y(i)     y1(i)    y2(i)    y3(i)    y4(i)
_____________________________________________________

 2.000    9.000     1.060    0.130   -0.010    0.020

 2.250    10.060    1.190    0.120    0.010

 2.500    11.250    1.310    0.130

 2.750    12.560    1.440

 3.000    14.000


 u = 0.400

 f(2.35) = 10.522240

*/
