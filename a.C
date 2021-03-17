#include<stdio.h>
int a_sum(int x)
{
	int k=1;
	int s=0;
	for(k=1;k<=x;k++)
	{
		s=s+k;
	}
	return s;
}
int b_sum(int y)
{
	int k=1;
	int s=0;
	int n=0;
	for(k=1;k<=y;k++)
	{
		n=k*k;
		s=s+n;
	}
	return s;
}
double c_sum(int z)
{
	int k=1;
	double s=0;
	double n=0;
	for(k=1;k<=z;k++)
	{
		n=1.0/k;
		s=s+n;
	}
	return s;
}
int main(void)
{
	int a,b,c;
	double sum;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	sum = a_sum(a)+b_sum(b)+c_sum(c);
	printf("%.0lf\n",sum);
	return 0;
}