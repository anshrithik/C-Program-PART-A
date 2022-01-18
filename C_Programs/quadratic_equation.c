#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()	{
	int a,b,c,dis,flag,root1,root2;
	
	printf("Enter the Values of a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	
	dis = (b * b) - (4 * a * c);
	printf("Discrimenent : %d\n",dis);

	if (dis==0)	{
		flag = 1;
	}
	
	if (dis>0)	{
		flag = 2;
	}
	
	if (dis<0)	{
		flag = 3;
	}
	
	switch (flag)	{
		
		case 1 :
			printf("Root are Real and Equal\n");
			root2=root1= -b / 2*a;
			printf("Root : %d\n",root1);
			printf("Root : %d\n",root2);
			break;
		
		case 2 :
			printf("Roots are Real and Distinct\n");
			root1 = -b - sqrt(dis) / 2 * a;
			root2 = -b + sqrt(dis) / 2 * a;
			printf("Root : %d\n",root1);
			printf("Root : %d\n",root2);
			break;
		
		case 3 :
			printf("Roots are Imaginary\n");
			break;
			
		default :
			printf("Invalid");
	}
	 
	getch();
	return 0;
}