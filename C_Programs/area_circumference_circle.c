#include <stdio.h>
#include <conio.h>

int main ()	{
	int radius,area,circumference,pi = 3.14;
	
	printf("Program to Find the Radius of a Cirle \n");
	printf("Enter the Radius : ");
	scanf("%d",&radius);
	
	area = pi * radius * radius;
	circumference = 2 * pi * radius;
	
	printf("Area of the Cirle is : %d\n",area);
	printf("Circumference of the Circle is : %d",circumference);
	return 0;
	
	getch();
}