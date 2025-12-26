#include<stdio.h>
int combination(int x,int y);
void main()
{
int n,r;
int ncr;
printf("Enter n: ");
scanf("%d",&n);
printf("Enter r: ");
scanf("%d",&r);


ncr=combination(n,r);
printf("%d",ncr);
getch();
}

int combination(int x, int y)
{
int xfact=1,yfact=1,xyfact=1;
int i;
int xcy;
for(i=1;i<=x;i++)
	{
	xfact=xfact*i;
	}
	for(i=1;i<=y;i++)
	{
	yfact=yfact*i;
	}
for(i=1;i<=x-y;i++)
	{
	xyfact=xyfact*i;
	}

xcy=xfact/((yfact)*(xyfact));
if(y>x)
return 0;
else
return xcy ;
}