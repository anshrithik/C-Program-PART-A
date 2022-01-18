#include <stdio.h>
#include <conio.h>

int main()	{
	float m1,m2,m3,m4,m5,total;
	float per;
	
	printf("Enter the marks : ");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
	
	total = m1+m2+m3+m4+m5;
	per = total/500 * 100;
	printf("Total : %f/500\n",total);
	printf("Per : %f%\n",per);
	
	
	if (per >= 90) {
		printf("Distenction");
	} else if (per >= 75 && per<90)	{
		printf("First Class");
	} else if (per >= 55 && per<75)	{
		printf("Second Class");
	} else if (per >= 35 && per<55)	{
		printf("Third Class");
	} else	{
		printf("Fail");
	}
	getch();
	return 0;
}