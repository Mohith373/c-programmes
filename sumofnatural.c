#include<stdio.h>
int sum(int m)
{
	if(m<=0)
	return 0;
	else
	return m+sum(m-1);
}
void main()
{
	int a;
	printf("entew");
	scanf("%d",&a);
	printf("sum is %d",sum(a));
}