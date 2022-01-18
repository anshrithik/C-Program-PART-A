#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()	{
	char str[100];
	int i,vol=0,cons=0,len;
	
	printf("Enter a String : ");
	scanf("%s",&str);
	len = strlen(str);
	
	for (i=0;str[i] != '\0';i++)	{
		if (str[i] == 'a' ||
			str[i] == 'e' ||
			str[i] == 'i' ||
			str[i] == 'o' ||
			str[i] == 'u' ||
			str[i] == 'A' ||
			str[i] == 'E' ||
			str[i] == 'I' ||
			str[i] == 'O' ||
			str[i] == 'U' )	
			{
				vol++;	
			} else 
			{
				cons++;
			}
	}
	printf("Lenght of the String : %d\n",len);
	printf("vowel = %d\n",vol);
	printf("Consonent = %d",cons);
	getch();
	return 0;
}