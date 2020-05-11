#include<stdio.h>
int main()
{
	int per;
	printf("Enter your percentage between 0-100:\n");
	scanf("%d",&per);
	if(per>80&&per<=100)
	printf("A GRADE\n");
    else if(per>=70&&per<=80)
	printf("B GRADE\n");
	else if(per>=60&&per<=69)
	printf("C GRADE\n");
	else if(per>=45&&per<=59)
	printf("D GRADE\n");
	else if(per>=0&&per<45)
	printf("FAIL\n");
	else
	printf("Enter percentage between 0-100:\n");
	return 0;
	
}
