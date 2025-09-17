#include<stdio.h>
int main(){
	int number, lastdigit;
	printf("Enter an number:");
	scanf("%d", &number);
	lastdigit = number % 10;
	if(lastdigit %3 == 0){
	   printf("The last digit %d  is divisible by 3.\n", lastdigit);
	} else {
		printf("The last digit %d is not divisible by 3.\n", lastdigit);
	} 
	return 0;  
}
