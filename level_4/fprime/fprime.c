#include <stdio.h>
#include <stdlib.h>

int pgcd(num1,num2)
{
	int max=0;
	int min=0;
	int res=0;
if (num1>num2){
	max =num1;
	min=num2;
}
else
	{
		max=num2;
		min=num1;
	}
	while (min >0)
	{
		res=max/min;
		max=min;
		min=res;

	}
	return (max);
}

int main()
{
	printf("%d",pgcd(42,10));
}