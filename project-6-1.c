#include<stdio.h>

main()
{
	char string[100];
	int s,e,length=0,name=1;

	printf("Enter any string: ");
	scanf("%s",string);

	while(string[length]!='\0')
	{
		length++;
	}

	s=0;
	e=length-1;

	while(s<e)
	{
		if(string[s]!=string[e])
		{
			name=0;
			break;
		}
		s++;
		e--;
	}
	if(name==1)
	{
		printf("The given string is a palindrome.\n");
	}
	else
	{
		printf("The given string is not a palindrome.");
	}
}
