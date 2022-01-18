#include<stdio.h>
#include<conio.h>

int main()	{
	int n,i,count=0,j;
	
	printf("Enter the number till where you need the Prime Numbers : ");
	scanf("%d",&n);
	
	printf("Prime Numbers are :");
		for (i=2;i<=n;i++)	
		{
			count=0;
			for(j=1;j<=i;j++)	{
				if(i%j==0)	{
					count++;
				}
			}
			if(count==2)	{
				printf(" %d\t",i);
			}
	}
	getch();
	return 0;
}