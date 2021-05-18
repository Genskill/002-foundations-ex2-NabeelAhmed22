#include <stdio.h>
#include <cs50.h>
int main(void){
	float a=get_float("side 1 ");
	float b=get_float("side 2 ");
	float c=get_float("side 3 ");
	if(a>b && a>c)
	{
	 	if((b*b)+(c*c)==a*a)
	 	{
	 		printf("Yes\n");
	 	}
	 	else
	 	{
	 		printf("No\n");
	 	}	
	 	
	}
	else if(b>a && b>c)
	{
	 	if((a*a)+(c*c)==b*b)
	 	{
	 		printf("Yes\n");
	 	}
	 	else
	 	{
	 		printf("No\n");	
	 	}
	}
	else if(c>a && c>b)
	{
	 	if((a*a)+(b*b)==c*c)
	 	{
	 		printf("Yes\n");
	 	}
	 	else
	 	{
	 		printf("No\n");
	 	}
	}
}
