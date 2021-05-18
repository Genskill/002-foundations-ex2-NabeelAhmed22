#include <stdio.h>
#include <cs50.h>
int main(void){
int t=get_int("Enter type of pattern (1 or 2) ");
	if(t==1){
	
		int h=get_int("Number of rows");
		for(int row=1;row<=h;row++){
			for(int col=h;col>=row;col--){
				printf("#");
			}
		printf("\n");	
		}
	}
	else if(t==2){
		int h=get_int("Number of rows");
		for(int row=1;row<=h;row++){
			for(int s=1;s<=h-row;s++)
			printf(" ");
			for(int col=1;col<=row;col++)
			printf("#");
			printf("\n");
		}
		
	}
}
