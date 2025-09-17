#include<stdio.h>
int main(){
    int num, firstdigit, lastdigit;
    printf("Enter a number:");
    scanf("%d",&num);
    lastdigit=num%10;
    firstdigit=num;
    while (firstdigit>=10){
    	firstdigit/=10;
	}
	if(firstdigit%2==0){
		printf("The first digit %d is Even.\n", firstdigit);
	}else{
		printf("The firsts digit %d is odd.\n",firstdigit);
}
    if (lastdigit %2==0){
    	printf("The lastdigit %d is Even.\n",lastdigit);
	}else{
		printf("The lastdigit %d is odd.\n",lastdigit);
	}
	return 0;
	}