#include <stdio.h>
#include <conio.h>

int main()	{
	int n,sum=0;
	
	printf("Enter the Number : ");
	scanf("%d",&n);
	
	while (n!=0 && n!=999)	
	{	
		sum=0;
		printf("Enter the Number : ");
		scanf("%d",&n);
		if (n>0) {
		sum=sum+n;
		}
		if(n==999)	{
			printf("Sum = %d\n",sum);
			printf("End of Program !");
		}
	}
	getch();
	return 0;
}