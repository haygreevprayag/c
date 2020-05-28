#include<stdio.h>
void main()
{
	int noofrows;
	printf("Enter the no of rows\n");
	scanf("%d",&noofrows);
	int colspace,colstar,row;
	for(row=1;row<=noofrows;row++)
	{
		for(colspace=noofrows-row;colspace>=1;colspace--)
		{
			printf(" ");
		}
		
		for(colstar=1;colstar<=(row*2)-1;colstar++)
		{
			printf("*");
			
		}
		printf("\n");
     }
}
			