#include <stdio.h>
#include <conio.h>

int main()	{
	
	int n,sum=0;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	while(n!=999)	{
		sum = sum + n;
	if(n<0)	{
		sum = sum - n;
	}
		printf("Enter 999 to STOP ! \n");
		printf("Enter a Number : ");
		scanf("%d",&n);
	}
	
	printf("Sum = %d",sum);
	
}
