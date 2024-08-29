#include<stdio.h>

main()
{
	char string[100];
	int frequency[256]={0};
	int length=0;

	printf("Enter any string: ");
	scanf("%s",string);

	while(string[length]!='\0')
	{
		frequency[(int)string[length]
		]++;
		length++;
	}

	printf("frequency of each letter:\n");
	for(int i=0;i<256;i++)
	{
		if(frequency[i]>0)
		{
			printf("%c=%d\n",i,frequency[i]);
		}
	}
}