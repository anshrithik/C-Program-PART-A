#include <stdio.h>
#include <conio.h>

int main()	{
	int n,i,count=0;
	
	printf("Enter the Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)	{
		if (n%i==0)	{
			count++;
		}
	}
	if (count==2)	{
			printf("The Number Prime.");
		}	else	{
			printf("The Number is not Prime.");
		}
	return 0;
	getch();
}