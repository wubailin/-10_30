#include<stdio.h>
int mymini(int x,int y)
{
	int m=x;
	if(y<x)
		m=y;
	return m;
}
int main()
{
	int a,b,c,d,e;
	scanf("%d%d%d",&a,&b,&c);
	d=mymini(a,b);
	e=mymini(c,d);
	printf("%d, %d, %d\n",a,b,c);
	printf("The Mini Number is %d\n",e);
}