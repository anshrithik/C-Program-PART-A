#include <stdio.h>
#include <conio.h>

int main()	{
	float marks[20],sum=0,avg;
	int i,n;
	
	printf("Enter the number of Students : ");
	scanf("%d",&n);
	
	printf("Enter the Marks : ");
	
	for(i=1;i<=n;i++)	{
		
		scanf("%f",&marks[i]);
		sum=sum+marks[i];
	}
	
	avg=sum/n;
	printf("Average of %d Student's Marks are : %f\n",n,avg);
	
	getch();
	return 0;
}