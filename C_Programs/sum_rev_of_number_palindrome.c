#include <stdio.h>
#include <conio.h>

int main()	{
	int n,sum=0,rem,rev=0;
	
	printf("Enter the Number : ");
	scanf("%d",&n);
	int orignalnum= n;
	while (n>0)	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		rev=rev*10+rem;
	}
	printf("Sum of Digits : %d\n",sum);
	printf("Reverse of Number : %d\n",rev);
	
	if (rev==orignalnum) {
		printf("%d and %d does match ! \nThe Number is a Palindrome",rev,orignalnum);
	}else	{
		printf("%d and %d does not match ! \nThe Number is not a Palindrome",rev,orignalnum);
	}
	getch();
	return 0;
}