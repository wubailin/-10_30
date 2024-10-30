#include<stdio.h>

int perimeter(int a)
{
	int b=a*6;
	return b;
}

int area(int c)
{
	int d=3*c*c;
	return d;
}

int main()
{
	int e,f,g;
	scanf("%d",&e);
	f = perimeter(e);
	g = area(e);
	printf("radius = %d\n",e);
	printf("perimeter = %d\n",f);
	printf("area = %d\n",g);
}