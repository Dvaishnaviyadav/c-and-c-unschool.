#include<stdio.h>
int main()
{
	int num;
	do
	{
		printf("Enter a number:\n ");
		scanf("%d",&num);
	}while(num !=0);
	printf("you are out of loop");
	return 0;
}
