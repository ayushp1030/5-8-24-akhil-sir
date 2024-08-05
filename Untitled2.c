#include<stdio.h>

main()
{
	int num1;
	printf("enter the value of a :");
	scanf("%d",&num1);
	
	if(num1>0)
	{
		printf("the value is Positive");
	}
	else if(num1<0)
	{
		printf("the value is Negative");
	}
	else
	{
		printf("the value is neutral");
	}
	
	
}
