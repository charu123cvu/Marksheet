#include<stdio.h>
int main()
{
	printf("Enter marks:");
	int marks=0;
	scanf("%d",&marks);
	if(marks>85 && marks<=100)
	{
		printf("You will get grade A:");
    }
    else
    {
    	printf("You will not get grade B:");
	}
	if(marks>70 && marks<=84)
	{
		printf("You will get grade B:");
	}
	else
	{
		printf("You will not get grade B:");
	}
	if(marks>55 && marks<=69)
	{
		printf("You will get grade C:");
	}
	else
	{
		printf("You will not get grade C:");
	}
	if(marks>40 && marks<=54)
	{
		printf("You will get grade D:");
	}
	else
	{
		printf("You will not get grade D:");
	}
	if(marks<=40)
	{
		printf("You will get grade F:");
	}
	return 0;
}
