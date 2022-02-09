#include <stdio.h>
#include <conio.h>

int main ()	{
	int num1,num2,num3;
	
	printf("Program to Find the Biggest of Three Numbers \n");
	printf("Enter Three Numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if (num1>num2 && num1>num3) {
		printf("%d is Greater than %d and %d",num1,num2,num3);
	} else if (num2>num1 && num2>num3) {
		printf("%d is Greater than %d and %d",num2,num1,num3);
	} else {
		printf("%d is Greater than %d and %d",num3,num1,num2);
	}
	
	return 0;
	getch();
}